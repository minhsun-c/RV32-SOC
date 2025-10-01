TOP = test_top
GTKWAVE = gtkwave

V_SRC = ./core/test_top.v
V_SRC += $(wildcard ./core/if/*.v)
V_SRC += $(wildcard ./core/id/*.v)
V_SRC += $(wildcard ./core/exe/*.v)
V_SRC += $(wildcard ./core/mem/*.v)
V_SRC += $(wildcard ./core/wb/*.v)
V_SRC += $(wildcard ./core/ctrl/*.v)
V_SRC += $(wildcard ./core/device/*.v)

TESTBENCH_SRC = $(wildcard ./tb/*.cpp)
VTOP = ./core/${TOP}.v
INC = -Icore/include

# ---- Tests layout ----
# Tests live in ./test/<name>/ with one test per folder
TEST_ROOT := ./test
TEST_DIRS := $(sort $(dir $(wildcard $(TEST_ROOT)/*/)))

# Select test case: `make run PROG=test2`
PROG ?= test1
PROG_DIR := $(TEST_ROOT)/$(PROG)
PROG_BIN := $(PROG_DIR)/test.bin

.DEFAULT_GOAL := all
all: rv32soc

obj_dir/V${TOP}.mk: ${V_SRC} ${TESTBENCH_SRC} $(PROG_BIN)
	verilator --top-module ${TOP}  --cc --exe --build ${TESTBENCH_SRC} ${INC} ${V_SRC} --trace
# --Wno-fatal

obj_dir/V${TOP}.exe: obj_dir/V${TOP}.mk
	$(MAKE) -C obj_dir -f V$(TOP).mk

# Build the selected test: expects each test folder to provide its own Makefile
$(PROG_BIN):
	$(MAKE) -C $(PROG_DIR)

.PHONY : rv32soc
rv32soc: obj_dir/V${TOP}.mk

.PHONY : run
run: ${PROG_BIN} obj_dir/V${TOP}.exe 
	obj_dir/V${TOP} ${PROG_BIN}

.PHONY : wave
wave: run
	${GTKWAVE} wave.vcd

.PHONY : clean
clean:
	rm -rf obj_dir wave.vcd
	rm -rf test_src/*.elf test_src/*.bin

.PHONY : indent
indent:
	clang-format -i tb/*.cpp
	verible-verilog-format --flagfile .verible-format.flags $(V_SRC)