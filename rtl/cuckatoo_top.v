
module cuckatoo_top (input CLOCK,
					input reset_n,
		      output state,
		      output siphash_reset_n,
		      output counter,
		      output siphash_addr,
		      output siphash_cs,
		      output siphash_we,
		      output siphash_write_data,
		      output siphash_read_data,
		      output read_data,
		      output result,
		      output done
		      );
	
	typedef enum logic[5:0] {RESET, WK0, WK1, WK2, WK3, WCTRL, WAIT_READY, WNONCE, COMPRESS, FINALIZE, R0, DONE} state_t;
	state_t state = RESET;
	state_t next_when_ready = DONE;
	state_t next_when_ctrl_written = DONE;
	
	localparam ADDR_KEY0         = 8'h10;
	localparam ADDR_KEY1         = 8'h11;
	localparam ADDR_KEY2         = 8'h12;
	localparam ADDR_KEY3         = 8'h13;		
	localparam ADDR_CTRL         = 8'h08;	
	localparam ADDR_STATUS       = 8'h09;  		
	localparam ADDR_NONCE        = 8'h18;
	localparam ADDR_WORD0        = 8'h20;
        		
	reg siphash_reset_n = 1'b1;
	reg siphash_cs = 1'b0;
	reg siphash_we = 1'b0;
	reg [7 : 0]   siphash_addr;
	reg [63 : 0]  siphash_write_data;
	wire [63 : 0] siphash_read_data;
	wire          tb_error;
	reg [63 : 0]  read_data;

	reg [63:0] nonce;
	
	reg [63:0] ctrl;

	reg [63 : 0] result;

	siphash hasher(
		.clk(CLOCK),
		.reset_n(siphash_reset_n),
		.cs(siphash_cs),
		.we(siphash_we),
		.addr(siphash_addr),
		.write_data(siphash_write_data),
		.read_data(siphash_read_data)
	); 			     
 		
	reg [31:0] nodes_address = 'd0;
	reg [31:0] nodes_data = 'd0;
	reg nodes_cs = 1'b0;
	reg nodes_we = 1'b0;
	reg nodes_oe = 1'b0; 		
 			     
	ram nodes(
		.clk(CLOCK),
		.address(nodes_address),
		.data(nodes_data),
		.cs(nodes_cs),
		.we(nodes_we),
		.oe(nodes_oe)
	);
  
	reg [31:0] edges_address = 'd0;
	reg [31:0] edges_data = 'd0;
	reg edges_cs = 1'b0;
	reg edges_we = 1'b0;
	reg edges_oe = 1'b0; 
	  
	ram edges(
		.clk(CLOCK),
		.address(edges_address),
		.data(edges_data),
		.cs(edges_cs),
		.we(edges_we),
		.oe(edges_oe)
	);

	reg [1: 0] counter = 'd0;
	reg [32: 0] wait_counter = 'd0;

	task siphash_reset;
		begin
			case (counter)
				'd0: begin 
					siphash_reset_n <= 'b0;
					counter <= counter + 1;
				end
					
				'd1: begin
					counter <= 0;
					siphash_reset_n <= 'b1;
					state <= WK0;
				end
			endcase		
		end
	endtask
	
	task siphash_read_word(input [7 : 0]  address, input state_t next_state);
		begin
			case (counter)
				'd0: begin 
					siphash_addr <= address;
					siphash_cs <= 1;					
					counter <= counter + 1;
				end
					
				'd1: begin
					read_data <= siphash_read_data;					
      				siphash_cs <= 0;
      				counter <= 0;
      				state <= next_state;
				end
			endcase			
		end
	endtask	
	
	task siphash_write_word(input [7 : 0]  address, input [63 : 0] word, input state_t next_state);
		begin
			case (counter)
				'd0: begin 
					siphash_addr <= address;
					siphash_write_data <= word;
					counter <= counter + 1;
					siphash_cs <= 1;
					siphash_we <= 1;					
				end
					
				'd1: begin
      				siphash_cs <= 0;
      				siphash_we <= 0;
      				counter <= 0;
      				state <= next_state;
				end
			endcase			
		end
	endtask
	
	task wait_ready(input state_t next_when_ready);
    	begin
			siphash_read_word(ADDR_STATUS, WAIT_READY);
        
        	if (read_data & 64'h00000001) 
        	begin
        		counter <= 0;
				state <= next_when_ready;
			end
		end
	endtask
	
	task dump_state;
		begin
			$display("Internal top state:");
			$display("key0_reg = 0x%08x, key1_reg = 0x%08x", hasher.key0_reg, hasher.key1_reg);
			$display("key2_reg = 0x%08x, key3_reg = 0x%08x", hasher.key2_reg, hasher.key3_reg);
			$display("nonce_reg  = 0x%08x", hasher.nonce_reg);
			$display("");

			$display("Internal core state:");
			$display("key    = 0x%016x", hasher.core.key);
			$display("nonce     = 0x%016x", hasher.core.nonce);
			$display("v0_reg = 0x%016x, v1_reg = 0x%016x", hasher.core.v0_reg, hasher.core.v1_reg);
			$display("v2_reg = 0x%016x, v3_reg = 0x%016x", hasher.core.v2_reg, hasher.core.v3_reg);
			$display("sword  = 0x%016x", hasher.core.siphash_word);
			$display("state  = 0x%02x, ready  = 0x%1x, valid = 0x%1x",
				hasher.core.siphash_ctrl_reg, hasher.core.ready, hasher.core.siphash_word_valid);
			$display("");
		end
	endtask // dump_state	
	
	// State register
	always @(posedge CLOCK) begin
		if (!reset_n) begin
			done <= 'b0;
			state <= RESET;
			counter <= 'd0;
			wait_counter <= 'd0;
			read_data <= 'd0;
			siphash_write_data <= 'd0;
			nonce <= 'd0;
			ctrl <= 'd0;
			result <= 'd0;
			siphash_reset_n <= 'd0;		
		end else 
		begin
	  		case (state)
	  			RESET: begin
					siphash_reset();
	  			end
	  			
	  			WK0: siphash_write_word(ADDR_KEY0, 64'd1, WK1);
	  			WK1: siphash_write_word(ADDR_KEY1, 64'd2, WK2);
	  			WK2: siphash_write_word(ADDR_KEY2, 64'd3, WK3);
	  			
	  			WK3: begin
	  				siphash_write_word(ADDR_KEY3, 64'd4, WCTRL);
	  				
	  				next_when_ctrl_written <= WAIT_READY;
	  				next_when_ready <= WNONCE;
	  				
	  				nonce <= 64'd111;
	  				ctrl <= 64'h1;
	  			end
	  			
	  			WCTRL: siphash_write_word(ADDR_CTRL, ctrl, next_when_ctrl_written); // 5
	  			
	  			WAIT_READY: wait_ready(next_when_ready); // 6
	  			
	  			WNONCE: siphash_write_word(ADDR_NONCE, nonce, COMPRESS); // 7
	  			
	  			COMPRESS: begin // 8
	  				ctrl <= 64'h2;
	  				state <= WCTRL;	
	  				
					next_when_ctrl_written <= WAIT_READY;  				
	  				next_when_ready <= FINALIZE;
	  			end
	  			  			
	  			FINALIZE: begin // 9
	  				ctrl <= 64'h4;
	  				state <= WCTRL;	
	  				
	  				read_data <= 0;  				
					next_when_ctrl_written <= WAIT_READY;  
	  				next_when_ready <= R0;  			
	  			end
	  			
	  			R0: siphash_read_word(ADDR_WORD0, DONE); // 10
	  			
	  			DONE: begin
	  				result <= read_data; // 11
	  				dump_state;

	  				done <= 'b1;
	  			end
	  		endcase
  		end // if (!reset_n)
	end

endmodule
