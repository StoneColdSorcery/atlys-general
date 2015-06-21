`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:16:26 03/02/2015
// Design Name:   ClockBaseTop
// Module Name:   C:/Users/Crazyfingers/Documents/Atlys Projects/ShiftRegister/SRtest.v
// Project Name:  ShiftRegister
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ClockBaseTop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SRtest;

	// Inputs
	reg CLK;
	reg sw;
	reg reset;
	// Outputs
	wire [7:0] Led;
  
	// Instantiate the Unit Under Test (UUT)
	ClockBaseTop uut (
		.CLK(CLK), 
		.sw(sw), 
		.reset(reset),
		.Led(Led)
	);




	

	initial begin
		// Initialize Inputs
		CLK = 0;
		sw = 1;
		reset = 1;
		
		#5	reset = 0;
		#5	reset = 1;
		// Wait 100 ns for global reset to finish
		#100;
		
        
		// Add stimulus here
	end
	
	always begin
		#5 CLK = ~CLK;
	end
      
	initial begin
		#100 $finish;
	end
	
endmodule

