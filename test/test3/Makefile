CROSS_COMPILE = riscv64-unknown-elf-
CFLAGS = -nostdlib -fno-builtin -march=rv32ima -mabi=ilp32 -g -Wall -msmall-data-limit=0 -mno-relax

CC = ${CROSS_COMPILE}gcc
OBJCOPY = ${CROSS_COMPILE}objcopy
OBJDUMP = ${CROSS_COMPILE}objdump

LD = -Ttext=0

.DEFAULT_GOAL := all
all: 
	${CC} ${CFLAGS} test.S ${LD} -o test.elf
	${OBJCOPY} -O binary test.elf test.bin

.PHONY : code
code: all
	@${OBJDUMP} -S test.elf > real.S

.PHONY : hex
hex: all
	@hexdump -C test.bin > hex.txt

.PHONY : clean
clean:
	rm -rf *.o *.bin *.elf