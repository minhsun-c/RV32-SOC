`include "defines.v"

module exe_type_r (
    input rst_i,

    input      [ `DATA_WIDTH-1:0] op1_i,
    input      [ `DATA_WIDTH-1:0] op2_i,
    input      [`RDATA_WIDTH-1:0] inst_i,
    output reg [`RDATA_WIDTH-1:0] reg_wdata_o,
    output reg                    reg_we_o
);

    wire [6:0] opcode = inst_i[6:0];
    wire [2:0] funct3 = inst_i[14:12];
    wire [6:0] funct7 = inst_i[31:25];

    wire op1_ge_op2_signed;
    wire op1_ge_op2_unsigned;
    assign op1_ge_op2_signed   = ($signed(op1_i) >= $signed(op2_i));
    assign op1_ge_op2_unsigned = (op1_i >= op2_i);

    wire [31:0] sr_shift;
    wire [31:0] sr_shift_mask;
    assign sr_shift      = op1_i >> op2_i[4:0];
    assign sr_shift_mask = 32'hffffffff >> op2_i[4:0];



    wire isType_r;
    assign isType_r = 
        (opcode == `INST_TYPE_R_M) && 
        ((funct7 == 7'b0000000)||(funct7==7'b0100000));

    always @(*) begin
        if (rst_i == 1 || isType_r == 1'b0) begin
            reg_wdata_o = `ZERO;
            reg_we_o    = `WRITE_DISABLE;
        end else begin
            case (funct3)
                `FUN3_ADD_SUB: begin
                    reg_we_o = `WRITE_ENABLE;
                    if (funct7 == `FUN7_SUB) reg_wdata_o = op1_i - op2_i;
                    else reg_wdata_o = op1_i + op2_i;
                end
                `FUN3_SLL: begin
                    reg_we_o    = `WRITE_ENABLE;
                    reg_wdata_o = op1_i << op2_i[4:0];
                end
                `FUN3_SLT: begin
                    reg_we_o    = `WRITE_ENABLE;
                    reg_wdata_o = {31'b0, $signed(op1_i) < $signed(op2_i)};
                end
                `FUN3_SLTU: begin
                    reg_we_o    = `WRITE_ENABLE;
                    reg_wdata_o = {31'b0, op1_i < op2_i};
                end
                `FUN3_XOR: begin
                    reg_we_o    = `WRITE_ENABLE;
                    reg_wdata_o = op1_i ^ op2_i;
                end
                `FUN3_SRL_SRA: begin
                    reg_we_o = `WRITE_ENABLE;
                    if (funct7 == `FUN7_SRA) reg_wdata_o = $signed(op1_i) >>> op2_i[4:0];
                    else reg_wdata_o = op1_i >> op2_i[4:0];
                end
                `FUN3_OR: begin
                    reg_we_o    = `WRITE_ENABLE;
                    reg_wdata_o = op1_i | op2_i;
                end
                `FUN3_AND: begin
                    reg_we_o    = `WRITE_ENABLE;
                    reg_wdata_o = op1_i & op2_i;
                end
            endcase
        end
    end  //always
endmodule
