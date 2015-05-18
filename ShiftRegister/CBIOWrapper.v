`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:17:05 05/06/2015 
// Design Name: 
// Module Name:    CBIOWrapper 
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
module CBIOWrapper(
	 input CLK,
	 input reset,
	 input sw,
    input [19:0] VHDCIIO1,
    output [19:0] VHDCIIO2,
    output [7:0] Led
   
    );
	 
	 assign VHDCIIO2 = 20'd0;
	 
	 // Instantiate the module
	ClockBaseTop clockbasetop (
    .CLK(CLK), 
    .sw(sw), 
    .reset(reset), 
    .ct_UartRx(VHDCIIO1[13]), 
    .ct_Led(Led)
    );


endmodule
