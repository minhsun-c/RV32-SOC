`include "defines.v"

module id_exe (
    input rst_i,
    input clk_i,

    // from id
    input [`RDATA_WIDTH-1:0] op1_i,
    input [`RDATA_WIDTH-1:0] op2_i,
    input                    reg_we_i,
    input [`RADDR_WIDTH-1:0] reg_waddr_i,
    input [ `DATA_WIDTH-1:0] inst_i,
    input [ `ADDR_WIDTH-1:0] inst_addr_i,

    //to exe
    output reg [`RDATA_WIDTH-1:0] op1_o,
    output reg [`RDATA_WIDTH-1:0] op2_o,
    output reg                    reg_we_o,
    output reg [`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg [ `DATA_WIDTH-1:0] inst_o,
    output reg [ `ADDR_WIDTH-1:0] inst_addr_o,

    // from hdu
    input stall_i,
    input flush_i
);
    wire [6:0] opcode = inst_i[6:0];

    always @(posedge clk_i) begin
        if (rst_i) begin
            inst_o      <= `NOP;
            inst_addr_o <= `ZERO;
            op1_o       <= `ZERO;
            op2_o       <= `ZERO;
            reg_we_o    <= `WRITE_DISABLE;
            reg_waddr_o <= `ZERO_REG;
        end else if (stall_i) begin
            inst_o      <= inst_o;
            inst_addr_o <= inst_addr_o;
            op1_o       <= op1_o;
            op2_o       <= op2_o;
            reg_we_o    <= reg_we_o;
            reg_waddr_o <= reg_waddr_o;
        end else if (flush_i) begin
            inst_o      <= `NOP;
            inst_addr_o <= inst_addr_o;
            op1_o       <= `ZERO;
            op2_o       <= `ZERO;
            reg_we_o    <= `WRITE_DISABLE;
            reg_waddr_o <= `ZERO_REG;
        end else begin
            inst_o      <= inst_i;
            inst_addr_o <= inst_addr_i;
            op1_o       <= op1_i;
            op2_o       <= op2_i;
            reg_we_o    <= reg_we_i;
            reg_waddr_o <= reg_waddr_i;
        end
    end
endmodule

