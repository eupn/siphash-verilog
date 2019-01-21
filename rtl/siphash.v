//======================================================================
//
// siphash.v
// ---------
// Top level wrapper for the Verilog 2001 implementation of 64-bit wide SipHash2-4.
// This wrapper provides a 64-bit memory-like interface.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//======================================================================

module siphash(
               input wire           clk,
               input wire           reset_n,
               input wire           cs,
               input wire           we,
               input wire [7 : 0]   addr,
               input wire [63 : 0]  write_data,
               output wire [63 : 0] read_data
              );


  //----------------------------------------------------------------
  // API and Symbolic names.
  //----------------------------------------------------------------
  localparam ADDR_CTRL         = 8'h08;
  localparam CTRL_INIT_BIT     = 0;
  localparam CTRL_COMPRESS_BIT = 1;
  localparam CTRL_FINALIZE_BIT = 2;

  localparam ADDR_STATUS       = 8'h09;
  localparam STATUS_READY_BIT  = 0;
  localparam STATUS_VALID_BIT  = 1;

  localparam ADDR_CONFIG       = 8'h0a;

  localparam ADDR_PARAM        = 8'h0b;
  localparam SIPHASH_START_C   = 0;
  localparam SIPHASH_SIZE_C    = 4;
  localparam SIPHASH_DEFAULT_C = 4'h2;
  localparam SIPHASH_START_D   = 4;
  localparam SIPHASH_SIZE_D    = 4;
  localparam SIPHASH_DEFAULT_D = 4'h4;

  localparam ADDR_KEY0         = 8'h10;
  localparam ADDR_KEY1         = 8'h11;
  localparam ADDR_KEY2         = 8'h12;
  localparam ADDR_KEY3         = 8'h13;

  localparam ADDR_nonce          = 8'h18;

  localparam ADDR_WORD0        = 8'h20;


  //----------------------------------------------------------------
  // Registers including update variables and write enable.
  //----------------------------------------------------------------
  reg [2 : 0]  ctrl_reg;
  reg [2 : 0]  ctrl_new;

  reg [7 : 0]  param_reg;
  reg          param_we;

  reg [63 : 0] key0_reg;
  reg          key0_we;

  reg [63 : 0] key1_reg;
  reg          key1_we;

  reg [63 : 0] key2_reg;
  reg          key2_we;

  reg [63 : 0] key3_reg;
  reg          key3_we;

  reg [63 : 0] nonce_reg;
  reg          nonce_we;

  reg [63 : 0] word0_reg;


  //----------------------------------------------------------------
  // Wires.
  //----------------------------------------------------------------
  reg [63 : 0]   tmp_read_data;

  wire           core_initalize;
  wire           core_compress;
  wire           core_finalize;
  wire [3 : 0]   core_c;
  wire [3 : 0]   core_d;
  wire [255 : 0] core_k;
  wire [63 : 0]  core_nonce;
  wire           core_ready;
  wire [63 : 0]  core_siphash_word;
  wire           core_siphash_word_valid;


  //----------------------------------------------------------------
  // Concurrent connectivity for ports etc.
  //----------------------------------------------------------------
  assign read_data       = tmp_read_data;

  assign core_initalize  = ctrl_reg[CTRL_INIT_BIT];
  assign core_compress   = ctrl_reg[CTRL_COMPRESS_BIT];
  assign core_finalize   = ctrl_reg[CTRL_FINALIZE_BIT];
  assign core_c          = param_reg[(SIPHASH_START_C + SIPHASH_SIZE_C - 1) :
                                     SIPHASH_START_C];
  assign core_d          = param_reg[(SIPHASH_START_D + SIPHASH_SIZE_D - 1) :
                                     SIPHASH_START_D];
  assign core_k          = {key3_reg, key2_reg, key1_reg, key0_reg};
  assign core_nonce         = nonce_reg;


  //----------------------------------------------------------------
  // Core instance.
  //----------------------------------------------------------------
  siphash_core core(
                    .clk(clk),
                    .reset_n(reset_n),

                    .initalize(core_initalize),
                    .compress(core_compress),
                    .finalize(core_finalize),

                    .compression_rounds(core_c),
                    .final_rounds(core_d),
                    .key(core_k),
                    .nonce(core_nonce),

                    .ready(core_ready),
                    .siphash_word(core_siphash_word),
                    .siphash_word_valid(core_siphash_word_valid)
                   );


  //----------------------------------------------------------------
  // reg_update
  // Update functionality for all registers in the core.
  // All registers are positive edge triggered with
  // asynchronous active low reset.
  //----------------------------------------------------------------
  always @ (posedge clk)
    begin
      if (!reset_n)
        begin
          // Reset all registers to defined values.
          ctrl_reg  <= 3'h0;
          param_reg <= {SIPHASH_DEFAULT_D, SIPHASH_DEFAULT_C};
          key0_reg  <= 64'h0;
          key1_reg  <= 64'h0;
          key2_reg  <= 64'h0;
          key3_reg  <= 64'h0;
          nonce_reg   <= 64'h0;
          word0_reg <= 64'h0;
        end
      else
        begin
          ctrl_reg <= ctrl_new;

          if (param_we)
            param_reg <= write_data[7 : 0];

          if (key0_we)
            key0_reg <= write_data;

          if (key1_we)
            key1_reg <= write_data;

          if (key2_we)
            key2_reg <= write_data;

          if (key3_we)
            key3_reg <= write_data;

          if (nonce_we)
            nonce_reg <= write_data;

          // We sample the siphash word when valid is set.
          if (core_siphash_word_valid)
            begin
              word0_reg <= core_siphash_word;
            end
        end
    end // reg_update


  //----------------------------------------------------------------
  // api
  //----------------------------------------------------------------
  always @*
    begin : api
      tmp_read_data = 64'h0;
      ctrl_new      = 3'h0;
      param_we      = 1'b0;
      key0_we       = 1'b0;
      key1_we       = 1'b0;
      key2_we       = 1'b0;
      key3_we       = 1'b0;
      nonce_we        = 1'b0;

      if (cs)
        begin
          if (we)
            begin
              case (addr)
                ADDR_CTRL:
                  ctrl_new = write_data[2 : 0];

                ADDR_PARAM:
                  param_we  = 1'b1;

                ADDR_KEY0:
                  key0_we  = 1'b1;

                ADDR_KEY1:
                  key1_we  = 1'b1;

                ADDR_KEY2:
                  key2_we  = 1'b1;

                ADDR_KEY3:
                  key3_we  = 1'b1;

                ADDR_nonce:
                  nonce_we  = 1'b1;

                default:
                  begin
                  end
              endcase // case (addr)
            end

          else
            begin
              case (addr)
                ADDR_CTRL:
                  tmp_read_data = {61'h0, ctrl_reg};

                ADDR_STATUS:
                  tmp_read_data = {62'h0, core_siphash_word_valid,
                                   core_ready};

                ADDR_PARAM:
                  tmp_read_data = {56'h0, param_reg};

                ADDR_KEY0:
                  tmp_read_data = key0_reg;

                ADDR_KEY1:
                  tmp_read_data = key1_reg;

                ADDR_KEY2:
                  tmp_read_data = key2_reg;

                ADDR_KEY3:
                  tmp_read_data = key3_reg;

                ADDR_nonce:
                  tmp_read_data = nonce_reg;

                ADDR_WORD0:
                  tmp_read_data = word0_reg;

                default:
                  begin
                  end
              endcase // case (addr)
            end
        end
    end

endmodule // siphash

//======================================================================
// EOF siphash.v
//======================================================================
