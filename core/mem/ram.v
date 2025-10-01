`include "defines.v"

module ram (
    input                        clk_i,
    input                        we_i,
    input      [`ADDR_WIDTH-1:0] addr_i,
    input      [`DATA_WIDTH-1:0] data_i,
    output reg [`DATA_WIDTH-1:0] data_o
);

    reg  [                 7:0] mem   [`MEM_SIZE-1:0];
    wire [`PART_ADDR_WIDTH-1:0] addr4;
    assign addr4 = {addr_i[`PART_ADDR_WIDTH-1:2], 2'b0};

    always @(*) begin
        data_o <= {mem[addr4], mem[addr4+1], mem[addr4+2], mem[addr4+3]};
    end

    always @(posedge clk_i) begin
        if (we_i == 1'b0) begin
            mem[addr4]   <= mem[addr4];
            mem[addr4+1] <= mem[addr4+1];
            mem[addr4+2] <= mem[addr4+2];
            mem[addr4+3] <= mem[addr4+3];
        end else begin
            mem[addr4]   <= data_i[31:24];
            mem[addr4+1] <= data_i[23:16];
            mem[addr4+2] <= data_i[15:8];
            mem[addr4+3] <= data_i[7:0];
        end
    end

    task writeByte;
        /*verilator public*/
        input integer byte_addr;
        input [7:0] val;
        begin
            reg [`ADDR_WIDTH-1:0] t_addr;
            t_addr = byte_addr - `MEM_OFFSET;
            if (byte_addr >= `MEM_OFFSET && byte_addr < `MEM_OFFSET + `MEM_SIZE) begin
                mem[t_addr[`PART_ADDR_WIDTH-1:0]] = val;
            end
        end
    endtask
endmodule
