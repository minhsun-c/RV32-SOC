`include "defines.v"

module exe (
    input clk_i,
    input rst_i,

    // from id_exe
    input [ `DATA_WIDTH-1:0] op1_i,
    input [ `DATA_WIDTH-1:0] op2_i,
    input                    reg_we_i,
    input [`RADDR_WIDTH-1:0] reg_waddr_i,
    input [`RDATA_WIDTH-1:0] inst_i,

    // to exe_mem, fw
    output reg [`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg                    reg_we_o,
    output reg [`RDATA_WIDTH-1:0] reg_wdata_o,

    // to mem
    output reg                   mem_we_o,
    output reg [`ADDR_WIDTH-1:0] mem_addr_o,
    output reg [`DATA_WIDTH-1:0] mem_data_o,
    output reg [            3:0] mem_op_o,

    // to hdu
    output exe_type_m_stall_o
);

    wire [             6:0] opcode = inst_i[6:0];
    wire [             2:0] funct3 = inst_i[14:12];
    wire [             6:0] funct7 = inst_i[31:25];


    wire                    i_reg_we_o;
    wire [`RDATA_WIDTH-1:0] i_reg_wdata_o;
    exe_type_i exe_type_i0 (
        .rst_i      (rst_i),
        .inst_i     (inst_i),
        .op1_i      (op1_i),
        .op2_i      (op2_i),
        .reg_wdata_o(i_reg_wdata_o),
        .reg_we_o   (i_reg_we_o)
    );

    wire                    r_reg_we_o;
    wire [`RDATA_WIDTH-1:0] r_reg_wdata_o;
    exe_type_r exe_type_r0 (
        .rst_i      (rst_i),
        .inst_i     (inst_i),
        .op1_i      (op1_i),
        .op2_i      (op2_i),
        .reg_wdata_o(r_reg_wdata_o),
        .reg_we_o   (r_reg_we_o)
    );

    wire                    sl_reg_we_o;
    wire [`RDATA_WIDTH-1:0] sl_reg_wdata_o;
    wire [ `DATA_WIDTH-1:0] sl_mem_data_o;
    wire [ `ADDR_WIDTH-1:0] sl_mem_addr_o;
    wire                    sl_mem_we_o;
    wire [             3:0] sl_mem_op_o;
    exe_type_s_l exe_type_s_l0 (
        .rst_i      (rst_i),
        .inst_i     (inst_i),
        .op1_i      (op1_i),
        .op2_i      (op2_i),
        .reg_wdata_o(sl_reg_wdata_o),
        .reg_we_o   (sl_reg_we_o),
        .mem_addr_o (sl_mem_addr_o),
        .mem_data_o (sl_mem_data_o),
        .mem_we_o   (sl_mem_we_o),
        .mem_op_o   (sl_mem_op_o)
    );

    wire                   m_reg_we_o;
    wire [`DATA_WIDTH-1:0] m_reg_wdata_o;
    exe_type_m exe_type_m0 (
        .clk_i      (clk_i),
        .rst_i      (rst_i),
        .inst_i     (inst_i),
        .op1_i      (op1_i),
        .op2_i      (op2_i),
        .stall_o    (exe_type_m_stall_o),
        .reg_wdata_o(m_reg_wdata_o),
        .reg_we_o   (m_reg_we_o)
    );


    always @(*) begin
        if (rst_i == 1'b1) begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o    = `WRITE_DISABLE;
            mem_we_o    = `WRITE_DISABLE;
            mem_addr_o  = `ZERO;
            mem_data_o  = `ZERO;
            mem_op_o    = `MEM_NOP;
        end else begin
            case (opcode)
                `INST_TYPE_I: begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = i_reg_wdata_o;
                    reg_we_o    = i_reg_we_o;
                    mem_we_o    = `WRITE_DISABLE;
                    mem_addr_o  = `ZERO;
                    mem_data_o  = `ZERO;
                    mem_op_o    = `MEM_NOP;
                end
                `INST_TYPE_R_M: begin
                    reg_waddr_o = reg_waddr_i;
                    mem_we_o    = `WRITE_DISABLE;
                    mem_addr_o  = `ZERO;
                    mem_data_o  = `ZERO;
                    mem_op_o    = `MEM_NOP;
                    reg_wdata_o = r_reg_wdata_o | m_reg_wdata_o;
                    reg_we_o    = r_reg_we_o | m_reg_we_o;
                end
                `INST_TYPE_LUI, `INST_TYPE_AUIPC: begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = op1_i + op2_i;
                    reg_we_o    = reg_we_i;
                    mem_we_o    = `WRITE_DISABLE;
                    mem_addr_o  = `ZERO;
                    mem_data_o  = `ZERO;
                    mem_op_o    = `MEM_NOP;
                end
                `INST_TYPE_S, `INST_TYPE_L: begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = sl_reg_wdata_o;
                    reg_we_o    = sl_reg_we_o;
                    mem_we_o    = sl_mem_we_o;
                    mem_addr_o  = sl_mem_addr_o;
                    mem_data_o  = sl_mem_data_o;
                    mem_op_o    = sl_mem_op_o;
                end
                default: begin
                    reg_waddr_o = `ZERO_REG;
                    reg_wdata_o = `ZERO;
                    reg_we_o    = `WRITE_DISABLE;
                    mem_we_o    = `WRITE_DISABLE;
                    mem_addr_o  = `ZERO;
                    mem_data_o  = `ZERO;
                    mem_op_o    = `MEM_NOP;
                end
            endcase
        end
    end

endmodule
