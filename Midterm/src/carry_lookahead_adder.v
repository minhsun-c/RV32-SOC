module Carry_Lookahead_Adder #(
    parameter WIDTH = 32
) (
    output              carry_o,
    output  [WIDTH-1:0] sum_o,
    input   [WIDTH-1:0] A_i,
    input   [WIDTH-1:0] B_i,
    input               carry_i
);
    wire    [WIDTH : 0] carry;
    assign  carry[0] = carry_i;
    generate
        for (genvar i=0; i<=WIDTH; i=i+1) begin
            Full_Adder Fi (
                .carry_o(carry[i+1]), .sum_o(sum_o[i]), 
                .A_i(A_i[i]), .B_i(B_i[i]), .carry_i(carry[i])
            ); 
        end
    endgenerate
    assign  carry_o = carry[WIDTH];

endmodule
