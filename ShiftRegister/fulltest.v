`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:26:22 05/02/2015
// Design Name:   ClockBaseTop
// Module Name:   C:/Users/Crazyfingers/Documents/Atlys Projects/ShiftRegister/fulltest.v
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

module fulltest;

	// Inputs
	reg CLK;
	reg sw;
	reg reset;
	reg ct_txclk;
	reg ct_ld_tx_data;
	reg [7:0] ct_tx_data;
	reg ct_tx_enable;
	reg ct_uld_rx_data;
	reg ct_rx_enable;
	reg ct_rx_in;
	
	
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	ClockBaseTop uut (
		.CLK(CLK), 
		.sw(sw), 
		.reset(reset),
		.ct_ld_tx_data(ct_ld_tx_data), 
		.ct_tx_data(ct_tx_data), 
		.ct_tx_enable(ct_tx_enable),  
		.ct_rx_enable(ct_rx_enable), 
		.ct_rx_in(ct_rx_in),
		.Led(led)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		sw = 0;
		reset = 1;
		ct_ld_tx_data = 0;
		ct_tx_data = 0;
		ct_tx_enable = 0;
		ct_uld_rx_data = 0;
		ct_rx_enable = 0;
		ct_rx_in = 1;
		
		#10;
		reset = 0;
		#10;
		reset = 1;
		#10;
		ct_rx_enable = 1;
		// Wait 100 ns for global reset to finish
		#100;
		
       ct_rx_in = 0;
		// Add stimulus here

	end
	
	always
	 #5 CLK = ~CLK;
      
endmodule

