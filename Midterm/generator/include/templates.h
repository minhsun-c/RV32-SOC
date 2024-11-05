#define MODULE_TEMPLATE                     \
    {                                       \
        "module Wallace_Tree_Multiplier (", \
        "\toutput\t[%d : 0] product_o,",    \
        "\tinput\t[%d : 0] A_i,",           \
        "\tinput\t[%d : 0] B_i",            \
        ");"}

#define CSA_TEMPLATE                   \
    {"Carry_Save_Adder #(%d) CSA%d (", \
     "\t.carry_o(%s), .sum_o(%s),",    \
     "\t.A_i(%s), .B_i(%s), .C_i(%s));"}

#define CLA_TEMPLATE                      \
    {"Carry_Lookahead_Adder #(%d) CLA (", \
     "\t.carry_o(%s), .sum_o(%s),",       \
     "\t.A_i(%s), .B_i(%s), .carry_i(%s));"}