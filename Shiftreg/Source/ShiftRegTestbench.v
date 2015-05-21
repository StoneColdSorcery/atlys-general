`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:22:04 02/17/2015
// Design Name:   ShiftRegTop
// Module Name:   C:/Users/Crazyfingers/Documents/Atlys Projects/ShiftRegister/ShiftRegTestbench.v
// Project Name:  ShiftRegister
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ShiftRegTop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ShiftRegTestbench;

	// Inputs
	reg SIN;
	reg SRCK;
	reg RCK;
	reg EN;
	reg CLR;

	// Outputs
	wire [7:0] Sreg;

	// Instantiate the Unit Under Test (UUT)
	ShiftRegTop uut (
		.SIN(SIN), 
		.SRCK(SRCK), 
		.RCK(RCK), 
		.EN(EN), 
		.CLR(CLR), 
		.Sreg(Sreg)
	);

	initial begin
		// Initialize Inputs
		SIN = 0;
		SRCK = 0;
		RCK = 0;
		EN = 0;
		CLR = 0;


		
		// Wait 100 ns for global reset to finish
		#100;
		
		CLR = 1;
		
		#1000
        
		SIN = 1;
		#1000
		SRCK = 1;
		#50
		SRCK = 0;
		$display(Sreg);
		
		SIN = 0;
		#1000
		SRCK = 1;
		#50
		SRCK = 0;
		$display(Sreg);
		
		SIN = 1;
		#1000
		SRCK = 1;
		#50
		SRCK = 0;
		$display(Sreg);
		
		SIN = 0;
		#1000
		SRCK = 1;
		#50
		SRCK = 0;
		$display(Sreg);
		
		SIN = 1;
		#1000
		SRCK = 1;
		#50
		SRCK = 0;
		$display(Sreg);
		
		SIN = 1;
		#1000
		SRCK = 1;
		#50
		SRCK = 0;
		$display(Sreg);
		
		SIN = 1;
		#1000
		SRCK = 1;
		#50
		SRCK = 0;
		$display(Sreg);
		
		SIN = 1;
		#1000
		SRCK = 1;
		#50
		SRCK = 0;
		$display(Sreg);
		// Add stimulus here

		SIN = 1;
		#1000
		SRCK = 1;
		#50
		SRCK = 0;
		$display(Sreg);

	end
      
endmodule

