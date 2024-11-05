module Full_Adder (
    output  sum_o,
    output  carry_o,
    input   A_i,
    input   B_i,
    input   carry_i
);
    wire    _propagate, _generate;
    assign  _propagate  = A_i ^ B_i;
    assign  _generate   = A_i & B_i;
    assign  carry_o     = _propagate & carry_i | _generate;
    assign  sum_o       = _propagate ^ carry_i;
endmodule
