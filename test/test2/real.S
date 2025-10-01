
test.elf      檔案格式 elf32-littleriscv


.text 區段的反組譯：

00000000 <_start>:
	.text			# Define beginning of text section
	.global	_start		# Define entry _start

_start:
ok	li x3, 0xffff0f0b	
   0:	ffff11b7          	lui	gp,0xffff1
   4:	f0b18193          	addi	gp,gp,-245 # ffff0f0b <__global_pointer$+0xfffef6d3>
ok	li x4, 0x0000f0ab	
   8:	0000f237          	lui	tp,0xf
   c:	0ab20213          	addi	tp,tp,171 # f0ab <__global_pointer$+0xd873>
ok	la x5, _array		
  10:	00000297          	auipc	t0,0x0
  14:	02028293          	addi	t0,t0,32 # 30 <_array>
ok	lh x4, 0(x5)
  18:	00029203          	lh	tp,0(t0)
ok	sb x3, 0(x4)
  1c:	00320023          	sb	gp,0(tp) # 0 <_start>
	li x2, 10
  20:	00a00113          	li	sp,10
	li x26, 10
  24:	00a00d13          	li	s10,10
	lb x10,0(x4) 	
  28:	00020503          	lb	a0,0(tp) # 0 <_start>
	li x27, 10
  2c:	00a00d93          	li	s11,10

00000030 <_array>:
  30:	00302010          	.word	0x00302010
  34:	00000000          	.word	0x00000000
