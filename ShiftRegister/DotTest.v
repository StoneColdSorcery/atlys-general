`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:07:21 03/06/2015
// Design Name:   DotController
// Module Name:   C:/Users/Crazyfingers/Documents/Atlys Projects/ShiftRegister/DotTest.v
// Project Name:  ShiftRegister
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DotController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
/*
module DotTest;

	// Inputs
	reg [4:0] colIn;
	reg [6:0] rowIn;
	reg enable;
	reg write;
	reg reset;
	reg clk;

	// Outputs
	wire [4:0] colReg;
	wire [6:0] rowReg;

	// Instantiate the Unit Under Test (UUT)
	DotController uut (
		.colIn(colIn), 
		.rowIn(rowIn), 
		.enable(enable), 
		.write(write), 
		.reset(reset), 
		.clk(clk), 
		.colReg(colReg), 
		.rowReg(rowReg)
	);

		initial begin
		// Initialize Inputs
		colIn = 0;
		rowIn = 0;
		enable = 0;
		write = 0; 
		clk = 0;
		reset = 1;
		
		#20;
		reset = 0;
		// Wait 100 ns for global reset to finish
		#100;
		reset = 1;
		#20;
		
		write = 1;
		enable = 1;
		#10;
		colIn = 5'b00001;
		rowIn = 7'b0000001;
		#10; 
		rowIn = 7'b1000001;
		#30; 
		rowIn = 7'b1100001;
		#30; 		

		write = 0;	
		#10;
		colIn = 5'b00000;
		rowIn = 7'b0000000;
		
		// Add stimulus here
	end
	
	always #5 clk = !clk;	 
      
endmodule

*/

module DotTest;

	// Inputs
	reg [4:0] colAddr;
	reg [6:0] rowIn;
	reg enable;
	reg write;
	reg reset;
	reg clk;

	// Outputs
	wire [4:0] colOut;
	wire [6:0] rowOut;

	// Instantiate the Unit Under Test (UUT)
	DotController uut (
		.colAddr(colAddr), 
		.rowIn(rowIn), 
		.enable(enable), 
		.write(write), 
		.reset(reset), 
		.clk(clk), 
		.colOut(colOut), 
		.rowOut(rowOut)
	);

		initial begin
		// Initialize Inputs
		colAddr = 0;
		rowIn = 0;
		enable = 0;
		write = 0; 
		clk = 0;
		reset = 1;
		
		#20;
		reset = 0;
		// Wait 100 ns for global reset to finish
		#100;
		reset = 1;
		#20;
		
		write = 1;
		enable = 1;
		#10;
		colAddr = 5'd1;
		rowIn = 7'b0000001;
		#10; 
		rowIn = 7'b1000001;
		#30; 
		rowIn = 7'b1100001;
		#30; 		

		write = 0;	
		#10;
		colAddr = 5'b00000;
		rowIn = 7'b0000000;
		
		// Add stimulus here
	end
	
	always #5 clk = !clk;	 
      
endmodule
