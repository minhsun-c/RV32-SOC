`include "defines.v"

module exe_mem (
    input rst_i,
    input clk_i,

    // from exe
    input [`RADDR_WIDTH-1:0] reg_waddr_i,
    input                    reg_we_i,
    input [`RDATA_WIDTH-1:0] reg_wdata_i,

    // to mem
    output reg [`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg                    reg_we_o,
    output reg [`RDATA_WIDTH-1:0] reg_wdata_o,

    // from exe
    input                   mem_we_i,
    input [`ADDR_WIDTH-1:0] mem_addr_i,
    input [`DATA_WIDTH-1:0] mem_data_i,
    input [            3:0] mem_op_i,

    // to mem
    output reg                   mem_we_o,
    output reg [`ADDR_WIDTH-1:0] mem_addr_o,
    output reg [`DATA_WIDTH-1:0] mem_data_o,
    output reg [            3:0] mem_op_o
);

    always @(posedge clk_i) begin
        if (rst_i == 1'b1) begin
            reg_waddr_o <= `ZERO_REG;
            reg_we_o    <= `WRITE_ENABLE;
            reg_wdata_o <= `ZERO;
            mem_we_o    <= `WRITE_ENABLE;
            mem_addr_o  <= `ZERO;
            mem_data_o  <= `ZERO;
            mem_op_o    <= `MEM_NOP;
        end else begin
            reg_waddr_o <= reg_waddr_i;
            reg_we_o    <= reg_we_i;
            reg_wdata_o <= reg_wdata_i;
            mem_we_o    <= mem_we_i;
            mem_addr_o  <= mem_addr_i;
            mem_data_o  <= mem_data_i;
            mem_op_o    <= mem_op_i;
        end
    end
endmodule
