// 
// 2019 (c) eupn
//
// A pipelined 64-bit Siphash2-4 hash function implementation.
//
// Latency is 10 clock cycles, and then one siphash result per cycle.
//

module siphash_top (clk, reset_n, we, cs, key, nonce, done, result);
    
    input                    clk;
    input                    reset_n;
    input                    we;
    input            [255:0] key;
    input                    cs;
    input            [63:0]  nonce;

    output    wire           done;
    output    wire   [63:0]  result;

    reg              [63:0]  reg_result;
    reg              [63:0]  reg_nonce;
    reg              [255:0] reg_key;
    reg                      reg_done;

    reg              [32:0]   counter;

    assign result = reg_result;
    assign done = reg_done;

    always @(posedge clk) begin : latch_nonce_and_key
        if (~reset_n)
        begin
            reg_nonce <= 0;
            reg_key <= 0;
        end else
        if (we) // Update key and nonce on WE signal
        begin
            reg_nonce <= nonce;
            reg_key   <= key;
        end
    end

    always @(posedge clk) begin : set_result
        if (~reset_n)
        begin
            counter <= 0;
            reg_done <= 0;
            reg_result <= 0;
        end else
        begin
            counter <= counter + 1;

            if (counter >= 10)
            begin
                reg_done <= 1;
                reg_result <= (s9_v0 ^ s9_v1) ^ (s9_v2 ^ s9_v3);
            end else
            begin
                reg_result <= 0;
            end
        end
    end

    // ======== STAGE 1: Load keys and nonce ========

    reg [63:0]    s1_v0, s1_v1, s1_v2, s1_v3;
    reg [63:0]    s1_nonce;

    always @(posedge clk) begin : stage_1
        if (~reset_n)
        begin
            s1_v0 <= 0;
            s1_v1 <= 0;
            s1_v2 <= 0;
            s1_v3 <= 0;

            s1_nonce <= 0;
        end else
        begin
            s1_v0 <= reg_key[63:0];
            s1_v1 <= reg_key[127:64];
            s1_v2 <= reg_key[191:128];
            s1_v3 <= reg_key[255:192];

            s1_nonce <= reg_nonce;
        end
    end

    // ======== STAGE 2: XOR v3 with nonce, save v0, v1, v2 ========

    reg [63:0]    s2_v0, s2_v1, s2_v2, s2_v3;
    reg [63:0]    s2_nonce;

    always @(posedge clk) begin : stage_2
        if (~reset_n)
        begin
            s2_v0 <= 0;
            s2_v1 <= 0;
            s2_v2 <= 0;
            s2_v3 <= 0;

            s2_nonce <= 0;
        end else
        begin        
            s2_v0 <= s1_v0;
            s2_v1 <= s1_v1;
            s2_v2 <= s1_v2;
            s2_v3 <= s1_v3 ^ s1_nonce;

            s2_nonce <= s1_nonce;
        end
    end

    // ======== STAGE 3: SipRound #1 ========

    reg [63:0]    s3_v0, s3_v1, s3_v2, s3_v3;
    reg [63:0]    s3_nonce;

    always @(posedge clk) begin : stage_3
        if (~reset_n)
        begin
            s3_nonce <= 0;
        end else
        begin        
            s3_nonce <= s2_nonce;
        end
    end

    sipround sr11(
        .clk(clk), 
        .reset_n(reset_n),
        
        .iv0(s2_v0),
        .iv1(s2_v1),
        .iv2(s2_v2),
        .iv3(s2_v3),

        .ov0(s3_v0),
        .ov1(s3_v1),
        .ov2(s3_v2),
        .ov3(s3_v3)
    );

    // ======== STAGE 4: SipRound #2 ========

    reg [63:0]    s4_v0, s4_v1, s4_v2, s4_v3;
    reg [63:0]    s4_nonce;

    always @(posedge clk) begin : stage_4
        if (~reset_n)
        begin
            s4_nonce <= 0;
        end else
        begin
            s4_nonce <= s3_nonce;
        end
    end

    sipround sr12(
        .clk(clk), 
        .reset_n(reset_n),
        
        .iv0(s3_v0),
        .iv1(s3_v1),
        .iv2(s3_v2),
        .iv3(s3_v3),

        .ov0(s4_v0),
        .ov1(s4_v1),
        .ov2(s4_v2),
        .ov3(s4_v3)
    );

    // ======== STAGE 5: XOR v0 with nonce and v2 with 0xff ========
    reg [63:0] s5_v0, s5_v1, s5_v2, s5_v3;

    always @(posedge clk) begin : stage_5
        if (~reset_n)
        begin
            s5_v0 <= 0;
            s5_v1 <= 0;
            s5_v2 <= 0;
            s5_v3 <= 0;
        end else
        begin        
            s5_v0 <= s4_v0 ^ s4_nonce;
            s5_v1 <= s4_v1;
            s5_v2 <= s4_v2 ^ 64'hff;
            s5_v3 <= s4_v3;
        end
    end

    // ======== STAGE 6: SipRound #1 ========

    reg [63:0] s6_v0, s6_v1, s6_v2, s6_v3;

    sipround sr21(
        .clk(clk), 
        .reset_n(reset_n),
        
        .iv0(s5_v0),
        .iv1(s5_v1),
        .iv2(s5_v2),
        .iv3(s5_v3),

        .ov0(s6_v0),
        .ov1(s6_v1),
        .ov2(s6_v2),
        .ov3(s6_v3)
    );

    // ======== STAGE 7: SipRound #2 ========

    reg [63:0] s7_v0, s7_v1, s7_v2, s7_v3;

    sipround sr22(
        .clk(clk), 
        .reset_n(reset_n),
        
        .iv0(s6_v0),
        .iv1(s6_v1),
        .iv2(s6_v2),
        .iv3(s6_v3),

        .ov0(s7_v0),
        .ov1(s7_v1),
        .ov2(s7_v2),
        .ov3(s7_v3)
    );

    // ======== STAGE 8: SipRound #3 ========

    reg [63:0] s8_v0, s8_v1, s8_v2, s8_v3;

    sipround sr23(
        .clk(clk), 
        .reset_n(reset_n),
        
        .iv0(s7_v0),
        .iv1(s7_v1),
        .iv2(s7_v2),
        .iv3(s7_v3),

        .ov0(s8_v0),
        .ov1(s8_v1),
        .ov2(s8_v2),
        .ov3(s8_v3)
    );

    // ======== STAGE 9: SipRound #4 ========

    reg [63:0] s9_v0, s9_v1, s9_v2, s9_v3;

    sipround sr24(
        .clk(clk),
        .reset_n(reset_n),
        
        .iv0(s8_v0),
        .iv1(s8_v1),
        .iv2(s8_v2),
        .iv3(s8_v3),

        .ov0(s9_v0),
        .ov1(s9_v1),
        .ov2(s9_v2),
        .ov3(s9_v3)
    );
endmodule

// ======== Single SipHash round ========

module sipround (input clk, input reset_n, input [63:0] iv0, iv1, iv2, iv3, output [63:0] ov0, ov1, ov2, ov3);
    reg  [63:0] add_0_res, add_1_res, add_2_res, add_3_res;
    reg  [63:0] v0_tmp, v1_tmp, v2_tmp, v3_tmp;
    reg  [63:0] v0, v1, v2, v3;
    reg  [63:0] i0, i1, i2, i3;

    always @(posedge clk)
    begin : latch_input
        if (~reset_n)
        begin
            i0 <= 0;
            i1 <= 0;
            i2 <= 0;
            i3 <= 0;
        end else
        begin
            i0 <= iv0;
            i1 <= iv1;
            i2 <= iv2;
            i3 <= iv3;
        end
    end

    always @*
    begin : comb_sipround
        add_0_res = i0 + i1;
        add_1_res = i2 + i3;

        v0_tmp = {add_0_res[31:0], add_0_res[63:32]};
        v1_tmp = {i1[50:0], i1[63:51]} ^ add_0_res;
        v2_tmp = add_1_res;
        v3_tmp = {i3[47:0], i3[63:48]} ^ add_1_res;    

        add_2_res = v1_tmp + v2_tmp;
        add_3_res = v0_tmp + v3_tmp;

        v0 = add_3_res;
        v1 = {v1_tmp[46:0], v1_tmp[63:47]} ^ add_2_res;
        v2 = {add_2_res[31:0], add_2_res[63:32]};
        v3 = {v3_tmp[42:0], v3_tmp[63:43]} ^ add_3_res;         
    end

    assign ov0 = v0;
    assign ov1 = v1;
    assign ov2 = v2;
    assign ov3 = v3;  
endmodule
