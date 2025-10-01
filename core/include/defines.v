`define RNUM            32
`define ADDR_WIDTH      32
`define RADDR_WIDTH     5
`define DATA_WIDTH      32
`define RDATA_WIDTH     32
`define MEM_SIZE        32'h200000
`define MEM_OFFSET      0
`define PART_ADDR_WIDTH 21


`define ZERO            32'h0
`define ZERO_REG        0
`define WRITE_ENABLE    1'b1
`define READ_ENABLE     1'b1
`define WRITE_DISABLE   1'b0
`define READ_DISABLE    1'b0

// Forwarding Unit Options
`define FW_WIDTH        3
`define FW_NONE         3'd0
`define FW_EXE_EXE      3'd1
`define FW_EXE_MEM      3'd2


`define NOP             32'h00000013 

// I type inst
`define INST_TYPE_I     7'b0010011
`define INST_ADDI       3'b000          //funct3
`define INST_SLTI       3'b010
`define INST_SLTIU      3'b011
`define INST_XORI       3'b100
`define INST_ORI        3'b110
`define INST_ANDI       3'b111
`define INST_SLLI       3'b001          //funct7 = 0000000
`define INST_SRLI       3'b101          //funct7 = 0000000
`define INST_SRAI       3'b101          //funct7 = 0100000

// R type inst
`define INST_TYPE_R_M   7'b0110011
`define INST_TYPE_R     7'b0110011
`define FUN3_ADD_SUB	3'b000	
`define FUN3_SLL	    3'b001	
`define FUN3_SLT	    3'b010	
`define FUN3_SLTU	    3'b011	
`define FUN3_XOR	    3'b100	
`define FUN3_SRL_SRA    3'b101	
`define FUN3_OR	        3'b110	
`define FUN3_AND	    3'b111	
`define FUN7_SUB        7'b0100000
`define FUN7_SRA        7'b0100000

// LUI, AUIPC
`define INST_TYPE_LUI   7'b0110111
`define INST_TYPE_AUIPC 7'b0010111

// S type inst
`define INST_TYPE_S     7'b0100011
`define INST_SB         3'b000 
`define INST_SH         3'b001 
`define INST_SW         3'b010

// L type inst
`define INST_TYPE_L     7'b0000011
`define INST_LB         3'b000
`define INST_LH         3'b001
`define INST_LW         3'b010
`define INST_LBU        3'b100
`define INST_LHU        3'b101

// MEM Ops
`define SB              4'b0001
`define SH              4'b0010
`define SW              4'b0011
`define LB              4'b1001
`define LH              4'b1010
`define LW              4'b1011
`define LBU             4'b1100
`define LHU             4'b1101
`define MEM_NOP         4'b0000