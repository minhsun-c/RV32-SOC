`include "defines.v"

module mem (
    input clk_i,
    input rst_i,

    // from exe_mem
    input [`RADDR_WIDTH-1:0] reg_waddr_i,
    input                    reg_we_i,
    input [`RDATA_WIDTH-1:0] reg_wdata_i,

    // to mem_wb
    output reg [`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg                    reg_we_o,
    output reg [`RDATA_WIDTH-1:0] reg_wdata_o,

    // from exe_mem
    input                   mem_we_i,
    input [`ADDR_WIDTH-1:0] mem_addr_i,
    input [`DATA_WIDTH-1:0] mem_data_i,
    input [            3:0] mem_op_i,

    // to dpram
    output                       dpram_ce_o,
    output     [`ADDR_WIDTH-1:0] dpram_addr_o,
    output                       dpram_we_o,
    output reg [`DATA_WIDTH-1:0] dpram_data_o,
    input      [`DATA_WIDTH-1:0] dpram_data_i
);

    // to wb
    always @(*) begin
        if (rst_i) begin
            reg_waddr_o = `ZERO_REG;
            reg_we_o    = `WRITE_DISABLE;
        end else begin
            reg_waddr_o = reg_waddr_i;
            reg_we_o    = reg_we_i;
        end
    end

    // Store -> dpram
    always @(*) begin
        if (mem_op_i == `SB) begin
            case (mem_addr_i[1:0])
                2'b00: begin
                    dpram_data_o = {dpram_data_i[31:8], mem_data_i[7:0]};
                end
                2'b01: begin
                    dpram_data_o = {dpram_data_i[31:16], mem_data_i[7:0], dpram_data_i[7:0]};
                end
                2'b10: begin
                    dpram_data_o = {dpram_data_i[31:24], mem_data_i[7:0], dpram_data_i[15:0]};
                end
                default: begin
                    dpram_data_o = {mem_data_i[7:0], dpram_data_i[23:0]};
                end
            endcase
        end else if (mem_op_i == `SH) begin
            if (~mem_addr_i[1]) begin
                dpram_data_o = {dpram_data_i[31:16], mem_data_i[15:0]};
            end else begin
                dpram_data_o = {mem_data_i[31:16], dpram_data_i[15:0]};
            end
        end else begin
            dpram_data_o = mem_data_i;
        end
    end

    // Load -> regfile
    always @(*) begin
        if (rst_i) begin
            reg_wdata_o = `ZERO;
        end else if (mem_op_i == `LB || mem_op_i == `LBU) begin
            case (mem_addr_i[1:0])
                2'b00: begin
                    reg_wdata_o = {{24{dpram_data_i[7] & (mem_op_i == `LB)}}, dpram_data_i[7:0]};
                end
                2'b01: begin
                    reg_wdata_o = {{24{dpram_data_i[15] & (mem_op_i == `LB)}}, dpram_data_i[15:8]};
                end
                2'b10: begin
                    reg_wdata_o = {{24{dpram_data_i[23] & (mem_op_i == `LB)}}, dpram_data_i[23:16]};
                end
                default: begin
                    reg_wdata_o = {{24{dpram_data_i[31] & (mem_op_i == `LB)}}, dpram_data_i[31:24]};
                end
            endcase
        end else if (mem_op_i == `LH || mem_op_i == `LHU) begin
            if (~mem_addr_i[1]) begin
                reg_wdata_o = {{16{dpram_data_i[15] & (mem_op_i == `LH)}}, dpram_data_i[15:0]};
            end else begin
                reg_wdata_o = {{16{dpram_data_i[31] & (mem_op_i == `LH)}}, dpram_data_i[31:16]};
            end
        end else if (mem_op_i == `LW) begin
            reg_wdata_o = dpram_data_i;
        end else begin
            reg_wdata_o = reg_wdata_i;
        end
    end

    assign dpram_addr_o = mem_addr_i;
    assign dpram_ce_o   = (mem_op_i != `MEM_NOP);
    assign dpram_we_o   = mem_we_i;
endmodule
