VERILATOR = verilator
VFLAGS = --binary -j 0 --timing -I./rtl

RTL_PKG = ./rtl/fpu_pkg.sv
RTL_ROUND = ./rtl/fpu_round.sv
RTL_ADD = ./rtl/fpu_add_sub.sv
RTL_MUL = ./rtl/fpu_mul.sv
RTL_DIV = ./rtl/fpu_div.sv
RTL_CMP = ./rtl/fpu_compare.sv
RTL_I2F = ./rtl/fpu_int_to_fp.sv
RTL_F2I = ./rtl/fpu_fp_to_int.sv
RTL_TOP = ./rtl/fpu_top.sv

.PHONY: all clean test_top test_add test_mul test_div

all: test_top test_add test_mul test_div

test_top:
	$(VERILATOR) $(VFLAGS) --top-module tb_fpu_top \
		$(RTL_PKG) $(RTL_ADD) $(RTL_MUL) $(RTL_DIV) $(RTL_CMP) \
		$(RTL_ROUND) $(RTL_I2F) $(RTL_F2I) $(RTL_TOP) \
		./tb/tb_fpu_top.sv
	./obj_dir/Vtb_fpu_top

test_add:
	$(VERILATOR) $(VFLAGS) --top-module tb_fpu_add_sub \
		$(RTL_PKG) $(RTL_ROUND) $(RTL_ADD) \
		./tb/tb_fpu_add_sub.sv
	./obj_dir/Vtb_fpu_add_sub

test_mul:
	$(VERILATOR) $(VFLAGS) --top-module tb_fpu_mul \
		$(RTL_PKG) $(RTL_ROUND) $(RTL_MUL) \
		./tb/tb_fpu_mul.sv
	./obj_dir/Vtb_fpu_mul

test_div:
	$(VERILATOR) $(VFLAGS) --top-module tb_fpu_div \
		$(RTL_PKG) $(RTL_ROUND) $(RTL_DIV) \
		./tb/tb_fpu_div.sv
	./obj_dir/Vtb_fpu_div

clean:
	rm -rf obj_dir