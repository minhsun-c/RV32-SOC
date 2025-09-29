`include "defines.v"

module mem_wb (
    input rst_i,
    input clk_i,

    //from exe_mem
    input [`RADDR_WIDTH-1:0] reg_waddr_i,
    input                    reg_we_i,
    input [`RDATA_WIDTH-1:0] reg_wdata_i,

    //to regfile
    output reg [`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg                    reg_we_o,
    output reg [`RDATA_WIDTH-1:0] reg_wdata_o
);

    always @(posedge clk_i) begin
        if (rst_i == 1) begin
            reg_waddr_o <= `ZERO_REG;
            reg_we_o    <= `WRITE_DISABLE;
            reg_wdata_o <= `ZERO;
        end else begin
            reg_waddr_o <= reg_waddr_i;
            reg_we_o    <= reg_we_i;
            reg_wdata_o <= reg_wdata_i;
        end
    end
endmodule
