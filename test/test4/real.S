
test.elf      檔案格式 elf32-littleriscv


.text 區段的反組譯：

00000000 <_start>:
    .text
    .globl _start
_start:
    li   x1,  6         # dividend
   0:	00600093          	li	ra,6
    li   x2,  3         # divisor
   4:	00300113          	li	sp,3
    li   x3, -7         # negative operand
   8:	ff900193          	li	gp,-7
    li   x4,  5         # another operand
   c:	00500213          	li	tp,5

    # Multiplication
    mul    x5, x1, x2      # 6*3 = 18
  10:	022082b3          	mul	t0,ra,sp
    mulh   x6, x1, x3      # high half of 6*-7 = -42
  14:	02309333          	mulh	t1,ra,gp
    mulhsu x7, x3, x2      # signed*unsigned = -7*3
  18:	0221a3b3          	mulhsu	t2,gp,sp
    mulhu  x8, x1, x4      # unsigned high part
  1c:	0240b433          	mulhu	s0,ra,tp

    # Division
    div    x9,  x1, x2     # 6/3 = 2
  20:	0220c4b3          	div	s1,ra,sp
    divu   x10, x4, x2     # 5/3 = 1
  24:	02225533          	divu	a0,tp,sp
    div    x11, x3, x2     # -7/3 = -2
  28:	0221c5b3          	div	a1,gp,sp
    divu   x12, x3, x2     # (unsigned) huge / 3
  2c:	0221d633          	divu	a2,gp,sp

    # Remainder
    rem    x13, x1, x2     # 6 % 3 = 0
  30:	0220e6b3          	rem	a3,ra,sp
    remu   x14, x4, x2     # 5 % 3 = 2
  34:	02227733          	remu	a4,tp,sp
    rem    x15, x3, x2     # -7 % 3 = -1
  38:	0221e7b3          	rem	a5,gp,sp
    remu   x16, x3, x2     # (unsigned) huge % 3
  3c:	0221f833          	remu	a6,gp,sp

    # Write results to memory for checking
    la   x20, _sink
  40:	00000a17          	auipc	s4,0x0
  44:	03ca0a13          	addi	s4,s4,60 # 7c <_sink>
    sw   x5,  0(x20)
  48:	005a2023          	sw	t0,0(s4)
    sw   x6,  4(x20)
  4c:	006a2223          	sw	t1,4(s4)
    sw   x7,  8(x20)
  50:	007a2423          	sw	t2,8(s4)
    sw   x8, 12(x20)
  54:	008a2623          	sw	s0,12(s4)
    sw   x9, 16(x20)
  58:	009a2823          	sw	s1,16(s4)
    sw   x10,20(x20)
  5c:	00aa2a23          	sw	a0,20(s4)
    sw   x11,24(x20)
  60:	00ba2c23          	sw	a1,24(s4)
    sw   x12,28(x20)
  64:	00ca2e23          	sw	a2,28(s4)
    sw   x13,32(x20)
  68:	02da2023          	sw	a3,32(s4)
    sw   x14,36(x20)
  6c:	02ea2223          	sw	a4,36(s4)
    sw   x15,40(x20)
  70:	02fa2423          	sw	a5,40(s4)
    sw   x16,44(x20)
  74:	030a2623          	sw	a6,44(s4)

    j .
  78:	0000006f          	j	78 <_start+0x78>

0000007c <_sink>:
	...
