`include "defines.v"

module if_id (
    input wire clk_i,
    input wire rst_i,

    input wire [`ADDR_WIDTH-1:0] inst_addr_i,
    input wire [`DATA_WIDTH-1:0] inst_i,

    output reg [`ADDR_WIDTH-1:0] inst_addr_o,
    output reg [`DATA_WIDTH-1:0] inst_o,

    // from hdu
    input stall_i,
    input flush_i
);

    always @(posedge clk_i) begin
        if (rst_i) begin
            inst_addr_o <= 0;
            inst_o      <= `NOP;
        end else if (stall_i) begin
            inst_addr_o <= inst_addr_o;
            inst_o      <= inst_o;
        end else if (flush_i) begin
            inst_addr_o <= 0;
            inst_o      <= `NOP;
        end else begin
            inst_addr_o <= inst_addr_i;
            inst_o      <= inst_i;
        end
    end
endmodule

