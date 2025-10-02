    .section .text
    .globl _start
_start:
    li x1, 5
    li x2, 5
    li x3, 0
    li x4, 10

    # ---- Branch Equal (BEQ) ----
    beq x1, x2, branch_taken
    addi x3, x3, 1      # should be skipped if branch taken

branch_taken:
    addi x3, x3, 2      # x3 = 2 if branch taken

    # ---- Jump And Link (JAL) ----
    jal x5, jump_target  # x5 should hold return addr (PC+4)
    addi x3, x3, 4       # should be skipped because of jump

jump_target:
    addi x3, x3, 8       # executed after jump

    # ---- Jump And Link Register (JALR) ----
    la x6, jalr_target
    jalr x7, 0(x6)       # jump to jalr_target, x7 gets return addr
    addi x3, x3, 16      # should be skipped

jalr_target:
    addi x3, x3, 32      # executed after JALR

    # ---- End: write result to x10 ----
    add x10, x3, x0      # x10 = final result
