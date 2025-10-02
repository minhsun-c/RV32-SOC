
test.elf      檔案格式 elf32-littleriscv


.text 區段的反組譯：

00000000 <_start>:
    .text
    .globl _start
_start:

    la   x10, _base        # x10 = &base[0]
   0:	00000517          	auipc	a0,0x0
   4:	03450513          	addi	a0,a0,52 # 34 <_base>
    la   x11, _sink        # x11 = &sink[0]
   8:	00000597          	auipc	a1,0x0
   c:	03c58593          	addi	a1,a1,60 # 44 <_sink>

# Case A
    lw   x5,  0(x10)      # load base[0]
  10:	00052283          	lw	t0,0(a0)
    add  x6,  x5, x7      # hazard here
  14:	00728333          	add	t1,t0,t2
    sw   x6,  0(x11)      # record result
  18:	0065a023          	sw	t1,0(a1)

# Case B
    lw   x5,  4(x10)      # load base[1]
  1c:	00452283          	lw	t0,4(a0)
    sw   x5,  4(x11)      # hazard here (store data)
  20:	0055a223          	sw	t0,4(a1)

# Case C
    lw   x5,  8(x10)      # load address into x5
  24:	00852283          	lw	t0,8(a0)
    sw   x1,  0(x5)       # hazard here (store address)
  28:	0012a023          	sw	ra,0(t0)

# Case D
    lw   x5, 12(x10)      # load comparison value
  2c:	00c52283          	lw	t0,12(a0)
    sw   x0,  8(x11)      # if taken/wrong, mark fail path
  30:	0005a423          	sw	zero,8(a1)

00000034 <_base>:
  34:	00000011          	.word	0x00000011
  38:	00000022          	.word	0x00000022
	...

00000044 <_sink>:
	...
