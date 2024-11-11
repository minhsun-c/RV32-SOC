# Wallace Tree Multiplier

## Module 
```verilog
module Wallace_Tree_Multiplier (
	output	[63 : 0] product_o,
	input	[31 : 0] A_i,
	input	[31 : 0] B_i
);
```
- `product_o`: 乘法器的乘積
- `A_i`, `B_i`: 乘法器的 2 個輸入

「**乘法器的輸入與輸出皆須為 Unsigned Integers**」

## Algorithm
1. 類似於直式乘法，先計算出 partial products 
2. 再將 partial products 每 3 個一組透過 Carry Save Adder 分別算出 Sum 和 Carry (Sum, Carry 為新產生的 partial products) 
3. 重複步驟 2 ，直到剩下 2 個 partial products ，再透過一般的加法器完成加總，Sum 即為乘法器的 product

## Q&A
- Why Carry Save Adder?
    > - Wallace Tree Multiplier 是由 Array Multiplier 演化而來。
    > - Array Multiplier 在累加 partial products 時，皆以一般的加法器來運算，但不論是哪一種加法器 (CRA, CLA, ...) 都會因為等待進位而造成延遲。
    > - Wallace Tree Multiplier 使用的 Carry Save Adder 較為不同的是各個位元的 Carry 間無任何關係，因此不會產生上述的延遲。這也是 Wallace Tree Multiplier 被稱作高速加法器的原因。
- Why Carry Lookahead Adder
    > - 透過 propagate, generate 可以判定哪些進位必定會產生，哪些進位必定不會產生
    > - 若可以先判定哪些進位必定會產生，那麼後續的計算就不用等待前面計算完再開始。
- Disadvantage?
    > - 由於 Wallace Tree Multiplier 為樹狀結構加法器，在 Placement 階段會造成 Layout 無法變得較方正，造成硬體面積的浪費。(vs. Array Multiplier)

## Code Generator
- 因為 Wallace Tree Multiplier 需要眾多 Carry Save Adders，如果直接撰寫 Verilog 較容易出錯，因此我使用 C 語言撰寫 Code Generator ，輸出為 Verilog Code 。
- 可執行 `generator/run.sh`，輸出為 `src/wallace_tree.v`

概念：
1. 較常使用的 Verilog Module Instantiation 可以透過 Macro 先定義出來，再透過 `sprintf()` 填寫參數即可
    ```c
    /* Example of Carry Save Adder */
    #define CSA_TEMPLATE                   \
        {"Carry_Save_Adder #(%d) CSA%d (", \
        "\t.carry_o(%s), .sum_o(%s),",    \
        "\t.A_i(%s), .B_i(%s), .C_i(%s));"}
    
    char csa_t[3][64] = CSA_TEMPLATE;
    ```
2. Carry Save Operation 其實就是從 Queue 中取出 3 個 partial product，再將產生的 2 個 partial product 加入 Queue，直到 Queue->size 為 2 ，改以 Carry Lookahead Adder 結尾
3. 未來若想要產生其他 size 的乘法器，僅需更改參數 width 即可

## Code Explaination
- 產生 partial products: 根據 `B_i[]` 決定 `A_i` 是否累加至乘法的結果
    ```
    wire [63 : 0] ppdt2;
    assign ppdt2 = {30'b0, A_i & {32{B_i[2]}}, 2'b0};
    ```
- 產生新的 partial products: 透過 carry save adder 得到新的 partial products
    ```
    wire [63 : 0] tree0, tree1; /* New partial products */
	Carry_Save_Adder #(64) CSA0 (
		.carry_o(tree0), .sum_o(tree1),
		.A_i(ppdt0), .B_i(ppdt1), .C_i(ppdt2));
    ```
- 最後剩餘 2 個 partial products 透過 carry lookahead adder 產生最終結果
    ```
    Carry_Lookahead_Adder #(64) CLA (
		.carry_o(), .sum_o(product_o),
		.A_i(tree58), .B_i(tree59), .carry_i(1'b0));
    ```
## Compile & Run
```bash
cd generator
chmod +x run.sh	
./run.sh        # Execute Code Generator
cd ..
make            # Compile Verilog & tb
make run        # ./obj_dir/Vwallace_tree > log
make wave       # Waveform
```

## Result
隨機產生兩個輸入，並計算出正確結果
```
799663753 * 445301969 = 356091843748829657
209683188 * 124708757 = 26149329739277316
1632824066 * 1777304120 = 2902024939736951920
1800331485 * 1723434036 = 3102752557331423460
496412316 * 227859185 = 113112105747722460
115247918 * 2089024647 = 240755741217434946
476365550 * 456762834 = 217586078637968700
1706396660 * 1912075350 = 3262758990908331000
754381966 * 154250674 = 116363926708945084
478315989 * 1025569170 = 490546131836459130
```
