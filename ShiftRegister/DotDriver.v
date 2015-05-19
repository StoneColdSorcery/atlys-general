`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:05:49 03/06/2015 
// Design Name: 
// Module Name:    DotDriver 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////


/*
module DotController(
    input [4:0] colIn,
    input [6:0] rowIn,
	 input enable,
	 input write,
	 input reset,
    input clk,
    output [4:0] colReg,
    output [6:0] rowReg
    );

	reg[4:0] colRegPre;
	reg[6:0] rowRegPre;
	
	reg[4:0] colReg;
	reg[4:0] colMask;

	reg[6:0] rowReg;
	
	
	always @ (posedge clk or negedge reset) begin
		if(~reset) begin
			colReg <= 5'b11111;
			colRegPre <= 5'b11111;
			colMask <= 5'b10000;
			rowReg <= 7'b0000000;
			rowRegPre <= 7'b0000000;
		end
		else if(enable) begin
		
			// load into display from pre, every cycle
			colReg <= ~(colRegPre & colMask);
			rowReg <= rowRegPre;
			
			//if write mode update preload regs
			if (write) begin
				colRegPre <= colIn;
				rowRegPre <= rowIn;
			end
			
			// shift colmask one spot, to select current active column
			begin 
				if((colMask != 5'b00001) && (colMask != 5'b00000) ) begin
					colMask <= colMask >> 1;
				end
				else begin
					colMask <= 5'b10000;
				end
				
			end
		end
	
	end
endmodule
*/

module DotController(
    input [4:0] colAddr,
    input [6:0] rowIn,
	 input enable,
	 input write,
	 input reset,
    input clk,
    output [4:0] colOut,
    output [6:0] rowOut
    );
	
	reg [6:0] mtxData [0:4];
	
	reg [4:0] colLut [0:4];

	
	
	reg[4:0] colState;

	reg[6:0] rowOut;
	reg[4:0] colOut;
	
	
	always @ (posedge clk or negedge reset) begin
		if(~reset) begin
			
			mtxData[0] <= {7'b0000000};
			mtxData[1] <= {7'b0000000};
			mtxData[2] <= {7'b0000000};
			mtxData[3] <= {7'b0000000};
			mtxData[4] <= {7'b0000000};
			
			colLut[0] = 5'b10000;
			colLut[1] = 5'b01000;			
			colLut[2] = 5'b00100;
			colLut[3] = 5'b00010;
			colLut[4] = 5'b00001;
			
			colState <= 5'd0;
			rowOut <= 7'b0000000;
			colOut <= 5'b00000;
		end
		else if(enable) begin

			//increment col sink counter
			
				
			rowOut <= mtxData[colState];
			colOut <= colLut[colState];
			
			
			//state counter incr
			if (colState < 5'd4) begin
				colState <= colState + 1;
			end
			else begin
				colState <= 5'd0;
			end
			
			//if write mode update preload regs
			if (write) begin
				mtxData[colAddr] <= rowIn;
			end
			

		end
	
	end
	
endmodule