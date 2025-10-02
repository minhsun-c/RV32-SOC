`include "defines.v"

module test_top (
    input rst_i,
    input clk_i
);

    wire [ `ADDR_WIDTH-1:0] pc_wire;
    wire                    ce_wire;

    // if -> if_id
    wire [ `ADDR_WIDTH-1:0] if_inst_addr_o;
    wire [ `DATA_WIDTH-1:0] if_inst_o;

    // if_id -> id
    wire [ `ADDR_WIDTH-1:0] if_id_inst_addr_o;
    wire [ `DATA_WIDTH-1:0] if_id_inst_o;

    // id -> id_exe
    wire [ `DATA_WIDTH-1:0] id_inst_o;
    wire [`RDATA_WIDTH-1:0] id_op1_o;
    wire [`RDATA_WIDTH-1:0] id_op2_o;
    wire                    id_reg_we_o;
    wire [`RADDR_WIDTH-1:0] id_reg_waddr_o;

    // id -> regfile
    wire [`RADDR_WIDTH-1:0] id_reg1_addr_o;
    wire [`RADDR_WIDTH-1:0] id_reg2_addr_o;
    wire                    id_reg1_re_o;
    wire                    id_reg2_re_o;

    // regfile
    wire [`RDATA_WIDTH-1:0] reg1_data_o;
    wire [`RDATA_WIDTH-1:0] reg2_data_o;

    // id_exe -> exe
    wire [`RDATA_WIDTH-1:0] id_exe_op1_o;
    wire [`RDATA_WIDTH-1:0] id_exe_op2_o;
    wire                    id_exe_reg_we_o;
    wire [`RADDR_WIDTH-1:0] id_exe_reg_waddr_o;
    wire [ `DATA_WIDTH-1:0] id_exe_inst_o;

    // exe -> exe_mem
    wire [`RADDR_WIDTH-1:0] exe_reg_waddr_o;
    wire                    exe_reg_we_o;
    wire [`RDATA_WIDTH-1:0] exe_reg_wdata_o;
    wire                    exe_mem_we_o;
    wire [ `ADDR_WIDTH-1:0] exe_mem_addr_o;
    wire [ `DATA_WIDTH-1:0] exe_mem_data_o;
    wire [             3:0] exe_mem_op_o;

    // exe -> hdu
    wire                    exe_type_m_stall_o;

    // exe_mem -> mem
    wire [`RADDR_WIDTH-1:0] mem_reg_waddr_i;
    wire                    mem_reg_we_i;
    wire [`RDATA_WIDTH-1:0] mem_reg_wdata_i;
    wire                    mem_we_i;
    wire [ `ADDR_WIDTH-1:0] mem_addr_i;
    wire [ `DATA_WIDTH-1:0] mem_data_i;
    wire [             3:0] mem_op_i;

    // mem -> mem_wb 
    wire [`RADDR_WIDTH-1:0] mem_reg_waddr_o;
    wire                    mem_reg_we_o;
    wire [`RDATA_WIDTH-1:0] mem_reg_wdata_o;

    // mem_wb -> regfile
    wire [`RADDR_WIDTH-1:0] wb_reg_waddr_i;
    wire                    wb_reg_we_i;
    wire [`RDATA_WIDTH-1:0] wb_reg_wdata_i;

    // mem -> dpram
    wire                    mem_dpram_ce_o;
    wire [ `ADDR_WIDTH-1:0] mem_dpram_addr_o;
    wire                    mem_dpram_we_o;
    wire [ `DATA_WIDTH-1:0] mem_dpram_data_o;
    wire [ `DATA_WIDTH-1:0] mem_dpram_data_i;

    // fw unit
    wire                    fw_en1_o;
    wire                    fw_en2_o;
    wire [`RDATA_WIDTH-1:0] fw_data1_o;
    wire [`RDATA_WIDTH-1:0] fw_data2_o;
    wire                    load_use_stall_o;

    // hazard detection unit
    wire [             4:0] stall_o;
    wire [             4:0] flush_o;


    // FW unit
    ForwardingUnit FW (
        // from id
        .reg1_raddr_i(id_reg1_addr_o),
        .reg2_raddr_i(id_reg2_addr_o),
        .reg1_re_i   (id_reg1_re_o),
        .reg2_re_i   (id_reg2_re_o),

        // from exe
        .exe_reg_waddr_i(exe_reg_waddr_o),
        .exe_reg_wdata_i(exe_reg_wdata_o),
        .exe_reg_we_i   (exe_reg_we_o),
        .exe_load_i     (exe_mem_op_o[3]),

        // from mem
        .mem_reg_waddr_i(mem_reg_waddr_o),
        .mem_reg_wdata_i(mem_reg_wdata_o),
        .mem_reg_we_i   (mem_reg_we_o),

        // to hdu
        .load_use_stall_o(load_use_stall_o),

        // to id
        .fw_en1_o  (fw_en1_o),
        .fw_en2_o  (fw_en2_o),
        .fw_data1_o(fw_data1_o),
        .fw_data2_o(fw_data2_o)
    );

    // Hazard Detection Unit
    HazardDetectionUnit HDU (
        .clk_i(clk_i),
        .rst_i(rst_i),

        // from fw
        .load_hazard_i(load_use_stall_o),

        // from exe
        .m_type_stall_i(exe_type_m_stall_o),

        .stall_o(stall_o),
        .flush_o(flush_o)
    );

    pc_reg pc_reg0 (
        .clk_i(clk_i),
        .rst_i(rst_i),

        //to if_id
        .pc_o(pc_wire),

        // to rom
        .ce_o(ce_wire),

        // from hdu
        .stall_i(stall_o[0])
    );

    dpram #(
        .RAM_SIZE      (32'h200000),
        .RAM_ADDR_WIDTH(21)
    ) data_ram0 (
        .clk_i(clk_i),
        .ce_i (mem_dpram_ce_o),

        // data port
        .we_i  (mem_dpram_we_o),
        .addr_i(mem_dpram_addr_o),
        .data_i(mem_dpram_data_o),
        .data_o(mem_dpram_data_i),

        // instrution port
        .inst_ce_i(ce_wire),
        .pc_i     (pc_wire),
        .inst_o   (if_inst_o)
    );

    // IF/ID
    if_id if_id0 (
        .clk_i(clk_i),
        .rst_i(rst_i),

        //from if
        .inst_addr_i(pc_wire),
        .inst_i     (if_inst_o),

        //to id
        .inst_addr_o(if_id_inst_addr_o),
        .inst_o     (if_id_inst_o),

        // hdu
        .stall_i(stall_o[1]),
        .flush_i(flush_o[1])
    );


    // ID
    id id0 (
        .rst_i(rst_i),

        //from if_id
        .inst_addr_i(if_id_inst_addr_o),
        .inst_i     (if_id_inst_o),

        //from regfile
        .reg1_rdata_i(reg1_data_o),
        .reg2_rdata_i(reg2_data_o),

        //to regfile
        .reg1_raddr_o(id_reg1_addr_o),
        .reg2_raddr_o(id_reg2_addr_o),
        .reg1_re_o   (id_reg1_re_o),
        .reg2_re_o   (id_reg2_re_o),

        //to id_exe
        .inst_o     (id_inst_o),
        .op1_o      (id_op1_o),
        .op2_o      (id_op2_o),
        .reg_we_o   (id_reg_we_o),
        .reg_waddr_o(id_reg_waddr_o),

        // from fw
        .fw_en1_o  (fw_en1_o),
        .fw_en2_o  (fw_en2_o),
        .fw_data1_o(fw_data1_o),
        .fw_data2_o(fw_data2_o)
    );

    // regfile
    regfile regfile0 (
        .rst_i(rst_i),
        .clk_i(clk_i),

        // from wb
        .waddr_i(wb_reg_waddr_i),
        .we_i   (wb_reg_we_i),
        .wdata_i(wb_reg_wdata_i),

        // from id
        .re1_i   (id_reg1_re_o),
        .raddr1_i(id_reg1_addr_o),
        .re2_i   (id_reg2_re_o),
        .raddr2_i(id_reg2_addr_o),

        // to id
        .rdata1_o(reg1_data_o),
        .rdata2_o(reg2_data_o)
    );


    // ID_EXE
    id_exe id_exe0 (
        .rst_i(rst_i),
        .clk_i(clk_i),

        //from id
        .inst_i     (id_inst_o),
        .op1_i      (id_op1_o),
        .op2_i      (id_op2_o),
        .reg_we_i   (id_reg_we_o),
        .reg_waddr_i(id_reg_waddr_o),

        //to exe
        .op1_o      (id_exe_op1_o),
        .op2_o      (id_exe_op2_o),
        .reg_we_o   (id_exe_reg_we_o),
        .reg_waddr_o(id_exe_reg_waddr_o),
        .inst_o     (id_exe_inst_o),

        // hdu
        .stall_i(stall_o[2]),
        .flush_i(flush_o[2])
    );


    // EXE
    exe exe0 (
        .clk_i(clk_i),
        .rst_i(rst_i),

        // from id_exe
        .op1_i      (id_exe_op1_o),
        .op2_i      (id_exe_op2_o),
        .reg_we_i   (id_exe_reg_we_o),
        .reg_waddr_i(id_exe_reg_waddr_o),
        .inst_i     (id_exe_inst_o),

        // to exe_mem, fw
        .reg_waddr_o(exe_reg_waddr_o),
        .reg_we_o   (exe_reg_we_o),
        .reg_wdata_o(exe_reg_wdata_o),

        // to mem
        .mem_we_o  (exe_mem_we_o),
        .mem_addr_o(exe_mem_addr_o),
        .mem_data_o(exe_mem_data_o),
        .mem_op_o  (exe_mem_op_o),

        // to hdu
        .exe_type_m_stall_o(exe_type_m_stall_o)
    );

    // exe_mem
    exe_mem exe_mem0 (
        .clk_i(clk_i),
        .rst_i(rst_i),

        // from exe
        .reg_waddr_i(exe_reg_waddr_o),
        .reg_we_i   (exe_reg_we_o),
        .reg_wdata_i(exe_reg_wdata_o),

        // to mem
        .reg_waddr_o(mem_reg_waddr_i),
        .reg_we_o   (mem_reg_we_i),
        .reg_wdata_o(mem_reg_wdata_i),

        // from exe
        .mem_we_i  (exe_mem_we_o),
        .mem_addr_i(exe_mem_addr_o),
        .mem_data_i(exe_mem_data_o),
        .mem_op_i  (exe_mem_op_o),

        // to mem
        .mem_we_o  (mem_we_i),
        .mem_addr_o(mem_addr_i),
        .mem_data_o(mem_data_i),
        .mem_op_o  (mem_op_i)
    );

    // mem
    mem mem0 (
        .clk_i(clk_i),
        .rst_i(rst_i),

        // from exe_mem
        .reg_waddr_i(mem_reg_waddr_i),
        .reg_we_i   (mem_reg_we_i),
        .reg_wdata_i(mem_reg_wdata_i),

        // from exe_mem
        .mem_we_i  (mem_we_i),
        .mem_addr_i(mem_addr_i),
        .mem_data_i(mem_data_i),
        .mem_op_i  (mem_op_i),

        // to mem_wb
        .reg_waddr_o(mem_reg_waddr_o),
        .reg_we_o   (mem_reg_we_o),
        .reg_wdata_o(mem_reg_wdata_o),

        // to dpram
        .dpram_ce_o  (mem_dpram_ce_o),
        .dpram_addr_o(mem_dpram_addr_o),
        .dpram_we_o  (mem_dpram_we_o),
        .dpram_data_o(mem_dpram_data_o),
        .dpram_data_i(mem_dpram_data_i)
    );

    // mem_wb
    mem_wb mem_wb0 (
        .rst_i(rst_i),
        .clk_i(clk_i),

        // from mem
        .reg_waddr_i(mem_reg_waddr_o),
        .reg_we_i   (mem_reg_we_o),
        .reg_wdata_i(mem_reg_wdata_o),

        //to regfile
        .reg_waddr_o(wb_reg_waddr_i),
        .reg_we_o   (wb_reg_we_i),
        .reg_wdata_o(wb_reg_wdata_i)
    );

endmodule

