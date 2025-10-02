
test.elf      檔案格式 elf32-littleriscv


.text 區段的反組譯：

00000000 <_start>:
    .section .text
    .globl _start
_start:
    li x1, 5
   0:	00500093          	li	ra,5
    li x2, 5
   4:	00500113          	li	sp,5
    li x3, 0
   8:	00000193          	li	gp,0
    li x4, 10
   c:	00a00213          	li	tp,10

    # ---- Branch Equal (BEQ) ----
    beq x1, x2, branch_taken
  10:	00208463          	beq	ra,sp,18 <branch_taken>
    addi x3, x3, 1      # should be skipped if branch taken
  14:	00118193          	addi	gp,gp,1 # 1841 <__global_pointer$+0x1>

00000018 <branch_taken>:

branch_taken:
    addi x3, x3, 2      # x3 = 2 if branch taken
  18:	00218193          	addi	gp,gp,2 # 1842 <__global_pointer$+0x2>

    # ---- Jump And Link (JAL) ----
    jal x5, jump_target  # x5 should hold return addr (PC+4)
  1c:	008002ef          	jal	t0,24 <jump_target>
    addi x3, x3, 4       # should be skipped because of jump
  20:	00418193          	addi	gp,gp,4 # 1844 <__global_pointer$+0x4>

00000024 <jump_target>:

jump_target:
    addi x3, x3, 8       # executed after jump
  24:	00818193          	addi	gp,gp,8 # 1848 <__global_pointer$+0x8>

    # ---- Jump And Link Register (JALR) ----
    la x6, jalr_target
  28:	00000317          	auipc	t1,0x0
  2c:	01030313          	addi	t1,t1,16 # 38 <jalr_target>
    jalr x7, 0(x6)       # jump to jalr_target, x7 gets return addr
  30:	000303e7          	jalr	t2,t1
    addi x3, x3, 16      # should be skipped
  34:	01018193          	addi	gp,gp,16 # 1850 <__global_pointer$+0x10>

00000038 <jalr_target>:

jalr_target:
    addi x3, x3, 32      # executed after JALR
  38:	02018193          	addi	gp,gp,32 # 1860 <__global_pointer$+0x20>

    # ---- End: write result to x10 ----
    add x10, x3, x0      # x10 = final result
  3c:	00018533          	add	a0,gp,zero
