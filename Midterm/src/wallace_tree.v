module Wallace_Tree_Multiplier (
	output	[63 : 0] product_o,
	input	[31 : 0] A_i,
	input	[31 : 0] B_i
);

	wire	[63 : 0] ppdt0, ppdt1, ppdt2, ppdt3, ppdt4, ppdt5, ppdt6, ppdt7, ppdt8, ppdt9, ppdt10, ppdt11, ppdt12, ppdt13, ppdt14, ppdt15, ppdt16, ppdt17, ppdt18, ppdt19, ppdt20, ppdt21, ppdt22, ppdt23, ppdt24, ppdt25, ppdt26, ppdt27, ppdt28, ppdt29, ppdt30, ppdt31;
	assign ppdt0 = {32'b0, A_i & {32{B_i[0]}}};
	assign ppdt1 = {31'b0, A_i & {32{B_i[1]}}, 1'b0};
	assign ppdt2 = {30'b0, A_i & {32{B_i[2]}}, 2'b0};
	assign ppdt3 = {29'b0, A_i & {32{B_i[3]}}, 3'b0};
	assign ppdt4 = {28'b0, A_i & {32{B_i[4]}}, 4'b0};
	assign ppdt5 = {27'b0, A_i & {32{B_i[5]}}, 5'b0};
	assign ppdt6 = {26'b0, A_i & {32{B_i[6]}}, 6'b0};
	assign ppdt7 = {25'b0, A_i & {32{B_i[7]}}, 7'b0};
	assign ppdt8 = {24'b0, A_i & {32{B_i[8]}}, 8'b0};
	assign ppdt9 = {23'b0, A_i & {32{B_i[9]}}, 9'b0};
	assign ppdt10 = {22'b0, A_i & {32{B_i[10]}}, 10'b0};
	assign ppdt11 = {21'b0, A_i & {32{B_i[11]}}, 11'b0};
	assign ppdt12 = {20'b0, A_i & {32{B_i[12]}}, 12'b0};
	assign ppdt13 = {19'b0, A_i & {32{B_i[13]}}, 13'b0};
	assign ppdt14 = {18'b0, A_i & {32{B_i[14]}}, 14'b0};
	assign ppdt15 = {17'b0, A_i & {32{B_i[15]}}, 15'b0};
	assign ppdt16 = {16'b0, A_i & {32{B_i[16]}}, 16'b0};
	assign ppdt17 = {15'b0, A_i & {32{B_i[17]}}, 17'b0};
	assign ppdt18 = {14'b0, A_i & {32{B_i[18]}}, 18'b0};
	assign ppdt19 = {13'b0, A_i & {32{B_i[19]}}, 19'b0};
	assign ppdt20 = {12'b0, A_i & {32{B_i[20]}}, 20'b0};
	assign ppdt21 = {11'b0, A_i & {32{B_i[21]}}, 21'b0};
	assign ppdt22 = {10'b0, A_i & {32{B_i[22]}}, 22'b0};
	assign ppdt23 = {9'b0, A_i & {32{B_i[23]}}, 23'b0};
	assign ppdt24 = {8'b0, A_i & {32{B_i[24]}}, 24'b0};
	assign ppdt25 = {7'b0, A_i & {32{B_i[25]}}, 25'b0};
	assign ppdt26 = {6'b0, A_i & {32{B_i[26]}}, 26'b0};
	assign ppdt27 = {5'b0, A_i & {32{B_i[27]}}, 27'b0};
	assign ppdt28 = {4'b0, A_i & {32{B_i[28]}}, 28'b0};
	assign ppdt29 = {3'b0, A_i & {32{B_i[29]}}, 29'b0};
	assign ppdt30 = {2'b0, A_i & {32{B_i[30]}}, 30'b0};
	assign ppdt31 = {1'b0, A_i & {32{B_i[31]}}, 31'b0};
	wire	[63 : 0] tree0, tree1;
	Carry_Save_Adder #(64) CSA0 (
		.carry_o(tree0), .sum_o(tree1),
		.A_i(ppdt0), .B_i(ppdt1), .C_i(ppdt2));
	wire	[63 : 0] tree2, tree3;
	Carry_Save_Adder #(64) CSA1 (
		.carry_o(tree2), .sum_o(tree3),
		.A_i(ppdt3), .B_i(ppdt4), .C_i(ppdt5));
	wire	[63 : 0] tree4, tree5;
	Carry_Save_Adder #(64) CSA2 (
		.carry_o(tree4), .sum_o(tree5),
		.A_i(ppdt6), .B_i(ppdt7), .C_i(ppdt8));
	wire	[63 : 0] tree6, tree7;
	Carry_Save_Adder #(64) CSA3 (
		.carry_o(tree6), .sum_o(tree7),
		.A_i(ppdt9), .B_i(ppdt10), .C_i(ppdt11));
	wire	[63 : 0] tree8, tree9;
	Carry_Save_Adder #(64) CSA4 (
		.carry_o(tree8), .sum_o(tree9),
		.A_i(ppdt12), .B_i(ppdt13), .C_i(ppdt14));
	wire	[63 : 0] tree10, tree11;
	Carry_Save_Adder #(64) CSA5 (
		.carry_o(tree10), .sum_o(tree11),
		.A_i(ppdt15), .B_i(ppdt16), .C_i(ppdt17));
	wire	[63 : 0] tree12, tree13;
	Carry_Save_Adder #(64) CSA6 (
		.carry_o(tree12), .sum_o(tree13),
		.A_i(ppdt18), .B_i(ppdt19), .C_i(ppdt20));
	wire	[63 : 0] tree14, tree15;
	Carry_Save_Adder #(64) CSA7 (
		.carry_o(tree14), .sum_o(tree15),
		.A_i(ppdt21), .B_i(ppdt22), .C_i(ppdt23));
	wire	[63 : 0] tree16, tree17;
	Carry_Save_Adder #(64) CSA8 (
		.carry_o(tree16), .sum_o(tree17),
		.A_i(ppdt24), .B_i(ppdt25), .C_i(ppdt26));
	wire	[63 : 0] tree18, tree19;
	Carry_Save_Adder #(64) CSA9 (
		.carry_o(tree18), .sum_o(tree19),
		.A_i(ppdt27), .B_i(ppdt28), .C_i(ppdt29));
	wire	[63 : 0] tree20, tree21;
	Carry_Save_Adder #(64) CSA10 (
		.carry_o(tree20), .sum_o(tree21),
		.A_i(ppdt30), .B_i(ppdt31), .C_i(tree0));
	wire	[63 : 0] tree22, tree23;
	Carry_Save_Adder #(64) CSA11 (
		.carry_o(tree22), .sum_o(tree23),
		.A_i(tree1), .B_i(tree2), .C_i(tree3));
	wire	[63 : 0] tree24, tree25;
	Carry_Save_Adder #(64) CSA12 (
		.carry_o(tree24), .sum_o(tree25),
		.A_i(tree4), .B_i(tree5), .C_i(tree6));
	wire	[63 : 0] tree26, tree27;
	Carry_Save_Adder #(64) CSA13 (
		.carry_o(tree26), .sum_o(tree27),
		.A_i(tree7), .B_i(tree8), .C_i(tree9));
	wire	[63 : 0] tree28, tree29;
	Carry_Save_Adder #(64) CSA14 (
		.carry_o(tree28), .sum_o(tree29),
		.A_i(tree10), .B_i(tree11), .C_i(tree12));
	wire	[63 : 0] tree30, tree31;
	Carry_Save_Adder #(64) CSA15 (
		.carry_o(tree30), .sum_o(tree31),
		.A_i(tree13), .B_i(tree14), .C_i(tree15));
	wire	[63 : 0] tree32, tree33;
	Carry_Save_Adder #(64) CSA16 (
		.carry_o(tree32), .sum_o(tree33),
		.A_i(tree16), .B_i(tree17), .C_i(tree18));
	wire	[63 : 0] tree34, tree35;
	Carry_Save_Adder #(64) CSA17 (
		.carry_o(tree34), .sum_o(tree35),
		.A_i(tree19), .B_i(tree20), .C_i(tree21));
	wire	[63 : 0] tree36, tree37;
	Carry_Save_Adder #(64) CSA18 (
		.carry_o(tree36), .sum_o(tree37),
		.A_i(tree22), .B_i(tree23), .C_i(tree24));
	wire	[63 : 0] tree38, tree39;
	Carry_Save_Adder #(64) CSA19 (
		.carry_o(tree38), .sum_o(tree39),
		.A_i(tree25), .B_i(tree26), .C_i(tree27));
	wire	[63 : 0] tree40, tree41;
	Carry_Save_Adder #(64) CSA20 (
		.carry_o(tree40), .sum_o(tree41),
		.A_i(tree28), .B_i(tree29), .C_i(tree30));
	wire	[63 : 0] tree42, tree43;
	Carry_Save_Adder #(64) CSA21 (
		.carry_o(tree42), .sum_o(tree43),
		.A_i(tree31), .B_i(tree32), .C_i(tree33));
	wire	[63 : 0] tree44, tree45;
	Carry_Save_Adder #(64) CSA22 (
		.carry_o(tree44), .sum_o(tree45),
		.A_i(tree34), .B_i(tree35), .C_i(tree36));
	wire	[63 : 0] tree46, tree47;
	Carry_Save_Adder #(64) CSA23 (
		.carry_o(tree46), .sum_o(tree47),
		.A_i(tree37), .B_i(tree38), .C_i(tree39));
	wire	[63 : 0] tree48, tree49;
	Carry_Save_Adder #(64) CSA24 (
		.carry_o(tree48), .sum_o(tree49),
		.A_i(tree40), .B_i(tree41), .C_i(tree42));
	wire	[63 : 0] tree50, tree51;
	Carry_Save_Adder #(64) CSA25 (
		.carry_o(tree50), .sum_o(tree51),
		.A_i(tree43), .B_i(tree44), .C_i(tree45));
	wire	[63 : 0] tree52, tree53;
	Carry_Save_Adder #(64) CSA26 (
		.carry_o(tree52), .sum_o(tree53),
		.A_i(tree46), .B_i(tree47), .C_i(tree48));
	wire	[63 : 0] tree54, tree55;
	Carry_Save_Adder #(64) CSA27 (
		.carry_o(tree54), .sum_o(tree55),
		.A_i(tree49), .B_i(tree50), .C_i(tree51));
	wire	[63 : 0] tree56, tree57;
	Carry_Save_Adder #(64) CSA28 (
		.carry_o(tree56), .sum_o(tree57),
		.A_i(tree52), .B_i(tree53), .C_i(tree54));
	wire	[63 : 0] tree58, tree59;
	Carry_Save_Adder #(64) CSA29 (
		.carry_o(tree58), .sum_o(tree59),
		.A_i(tree55), .B_i(tree56), .C_i(tree57));
	Carry_Lookahead_Adder #(64) CLA (
		.carry_o(), .sum_o(product_o),
		.A_i(tree58), .B_i(tree59), .carry_i());
endmodule
