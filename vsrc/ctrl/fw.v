`include "defines.v"

module ForwardingUnit (
    // from id
    input [`RADDR_WIDTH-1:0] reg1_raddr_i,
    input [`RADDR_WIDTH-1:0] reg2_raddr_i,
    input  reg1_re_i,
    input  reg2_re_i,

    // from exe
    input [`RADDR_WIDTH-1:0] exe_reg_waddr_i,
    input [`RDATA_WIDTH-1:0] exe_reg_wdata_i,
    input  exe_reg_we_i,

    // from mem
    input [`RADDR_WIDTH-1:0] mem_reg_waddr_i,
    input [`RDATA_WIDTH-1:0] mem_reg_wdata_i,
    input  mem_reg_we_i,
    
    output fw_en1_o,
    output fw_en2_o,
    output reg [`RDATA_WIDTH-1:0] fw_data1_o,
    output reg [`RDATA_WIDTH-1:0] fw_data2_o
);
    reg [`FW_WIDTH-1:0] fw_op1_o;
    reg [`FW_WIDTH-1:0] fw_op2_o;

    assign fw_en1_o = (fw_op1_o != `FW_NONE);
    assign fw_en2_o = (fw_op2_o != `FW_NONE);

    always @(*) begin
        if (reg1_re_i == `READ_ENABLE && exe_reg_we_i == `WRITE_ENABLE && exe_reg_waddr_i == reg1_raddr_i) begin
            fw_op1_o = `FW_EXE_EXE;
        end else if (reg1_re_i == `READ_ENABLE && mem_reg_we_i == `WRITE_ENABLE && mem_reg_waddr_i == reg1_raddr_i) begin
            fw_op1_o = `FW_EXE_MEM;
        end else begin
            fw_op1_o = `FW_NONE;
        end
	end

    always @(*) begin
        if (!(|reg1_raddr_i)) begin
            fw_data1_o = `ZERO;
        end else if (fw_op1_o == `FW_EXE_EXE) begin
            fw_data1_o = exe_reg_wdata_i;
        end else if (fw_op1_o == `FW_EXE_MEM) begin
            fw_data1_o = mem_reg_wdata_i;
        end else begin
            fw_data1_o = `ZERO;
        end
	end

    always @(*) begin
        if (reg2_re_i == `READ_ENABLE && exe_reg_we_i == `WRITE_ENABLE && exe_reg_waddr_i == reg2_raddr_i) begin
            fw_op2_o = `FW_EXE_EXE;
        end else if (reg2_re_i == `READ_ENABLE && mem_reg_we_i == `WRITE_ENABLE && mem_reg_waddr_i == reg2_raddr_i) begin
            fw_op2_o = `FW_EXE_MEM;
        end else begin
            fw_op2_o = `FW_NONE;
        end
	end

    always @(*) begin
        if (!(|reg2_raddr_i)) begin
            fw_data2_o = `ZERO;
        end else if (fw_op2_o == `FW_EXE_EXE) begin
            fw_data2_o = exe_reg_wdata_i;
        end else if (fw_op2_o == `FW_EXE_MEM) begin
            fw_data2_o = mem_reg_wdata_i;
        end else begin
            fw_data2_o = `ZERO;
        end
	end


endmodule