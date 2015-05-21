`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:50:33 03/13/2015
// Design Name:   uart
// Module Name:   C:/Users/Crazyfingers/Documents/Atlys Projects/ShiftRegister/uartTest.v
// Project Name:  ShiftRegister
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: uart
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module uartTest;

	// Inputs
	reg reset;
	reg txclk;
	reg ld_tx_data;
	reg [7:0] tx_data;
	reg tx_enable;
	reg rxclk;
	reg uld_rx_data;
	reg rx_enable;
	reg rx_in;

	// Outputs
	wire tx_out;
	wire tx_empty;
	wire [7:0] rx_data;
	wire rx_empty;

	// Instantiate the Unit Under Test (UUT)
	uart uut (
		.reset(reset), 
		.txclk(txclk), 
		.ld_tx_data(ld_tx_data), 
		.tx_data(tx_data), 
		.tx_enable(tx_enable), 
		.tx_out(tx_out), 
		.tx_empty(tx_empty), 
		.rxclk(rxclk), 
		.uld_rx_data(uld_rx_data), 
		.rx_data(rx_data), 
		.rx_enable(rx_enable), 
		.rx_in(rx_in), 
		.rx_empty(rx_empty)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		txclk = 0;
		ld_tx_data = 0;
		tx_data = 0;
		tx_enable = 0;
		rxclk = 0;
		uld_rx_data = 0;
		rx_enable = 0;
		rx_in = 1;
		
		#5
		reset = 1;
		#5 
		reset = 0;
		// Wait 100 ns for global reset to finish
		#100;
      rx_enable = 1;
		uld_rx_data = 1;
		// Add stimulus here
		#11 rx_in = 0;
		#11 rx_in = 1;
		#11 rx_in = 0;
		#11 rx_in = 1;
	end
	
	
	always #5 rxclk = !rxclk;	
	
      
endmodule

