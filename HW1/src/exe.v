`ifndef __EXE
`define __EXE

`include "include.v"

module exe(
    input wire rst_i,
    
    //from id_exe
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire reg_we_i,
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    
    //to exe_mem
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];

    always @(*) begin
        if (rst_i == 1) begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
        end else begin
	    reg_we_o = reg_we_i;
            case (opcode)
                `INST_TYPE_I: begin
                    case(funct3)
                        `FUN3_ADDI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i + op2_i;
                        end
                        `FUN3_ANDI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i & op2_i;
                        end
                        `FUN3_ORI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i | op2_i;
                        end
                        `FUN3_XORI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i ^ op2_i;
                        end
                        `FUN3_SLTI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = {31'b0, $signed(op1_i) < $signed(op2_i)};
                        end
                        `FUN3_SLTIU: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = {31'b0, op1_i < op2_i};
                        end
                        `FUN3_SLLI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i << op2_i;
                        end
                        `FUN3_SRLI_SRAI: begin
                            reg_waddr_o = reg_waddr_i;
                            if (funct7 == `FUN7_SRAI)
                                reg_wdata_o = $signed(op1_i) >>> op2_i;
                            else
                                reg_wdata_o = op1_i >> op2_i;
                        end
                        default: begin
                            reg_waddr_o = `ZERO_REG;
                            reg_wdata_o = `ZERO;
			                reg_we_o = `WRITE_DISABLE;
                        end//default
                    endcase
		        end
                default: begin
                    reg_waddr_o = `ZERO_REG;
                    reg_wdata_o = `ZERO;
                    reg_we_o = `WRITE_DISABLE;
                end 
            endcase
        end //if
    end //always

endmodule

`endif 
