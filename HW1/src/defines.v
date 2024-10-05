`ifndef __DEFINES
`define __DEFINES

`define RNUM            32
`define ADDR_WIDTH      32
`define RADDR_WIDTH     5
`define DATA_WIDTH      32
`define RDATA_WIDTH     32
`define MEM_SIZE        32'h200000
`define MEM_OFFSET      32'h0
`define PART_ADDR_WIDTH 21

`define ZERO            32'h0
`define ZERO_REG        0
`define WRITE_ENABLE    1'b1
`define READ_ENABLE     1'b1
`define WRITE_DISABLE   1'b0
`define READ_DISABLE    1'b0


`define NOP             0 
`define INST_TYPE_I 	7'b0010011
`define FUN3_ADDI	    3'b000	
`define FUN3_SLTI	    3'b010	
`define FUN3_SLTIU	    3'b011	
`define FUN3_XORI	    3'b100	
`define FUN3_ORI	    3'b110	
`define FUN3_ANDI	    3'b111	
`define FUN3_SLLI	    3'b001	
`define FUN3_SRLI_SRAI	3'b101	
`define FUN7_SRLI	    7'b0000000	
`define FUN7_SRAI	    7'b0100000

`endif 
