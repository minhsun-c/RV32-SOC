`include "defines.v"

module HazardDetectionUnit (
    input clk_i,
    input rst_i,

    // from fw
    input load_hazard_i,

    output reg [4:0] stall_o,
    output reg [4:0] flush_o
);

    // Bit positions
    localparam PC = 0;
    localparam IF_ID = 1;
    localparam ID_EX = 2;
    localparam EX_MEM = 3;
    localparam MEM_WB = 4;

    always @(*) begin
        // defaults
        stall_o = 5'b0;
        flush_o = 5'b0;

        if (rst_i) begin
            // keep zeros
        end else if (load_hazard_i) begin
            stall_o[PC]    = 1'b1;
            stall_o[IF_ID] = 1'b1;
            flush_o[ID_EX] = 1'b1;
        end
    end

endmodule
