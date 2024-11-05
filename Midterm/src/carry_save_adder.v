module Carry_Save_Adder #(
    parameter WIDTH = 32
) (
    output  [WIDTH-1 : 0] carry_o,
    output  [WIDTH-1 : 0] sum_o,
    input   [WIDTH-1 : 0] A_i,
    input   [WIDTH-1 : 0] B_i,
    input   [WIDTH-1 : 0] C_i
);
    wire    [WIDTH-1 : 0] carry;
    generate
        for (genvar i=0; i<WIDTH; i=i+1) begin
            Full_Adder Fi (
                .carry_o(carry[i]), .sum_o(sum_o[i]), 
                .A_i(A_i[i]), .B_i(B_i[i]), .carry_i(C_i[i])
            ); 
        end
    endgenerate
    assign  carry_o = {carry[WIDTH-2 : 0], 1'b0};
endmodule
