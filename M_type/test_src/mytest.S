	.text			# Define beginning of text section
	.global	_start		# Define entry _start

_start:
	addi x11, x0, 5
    addi x12, x0, 5
    beq x11, x12, BEQ_F
    addi x13, x0, 6

BEQ_F:
    addi x14, x0, 5
    addi x15, x0, 6
    bne x14, x15, END
    addi x16, x0, 8

END:
    jal FUNC
    j END2

FUNC:
    div x17, x11, x12
    mul x18, x11, x12
    jr ra

END2:
    addi x17, x0, 100