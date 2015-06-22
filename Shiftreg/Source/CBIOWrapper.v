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
	 input btn,
	 input sw,
    input VHDC_UARTRX,
	 output VHDC_UARTRX_BOUNCE,
	 output VHDC_SYSACTIVE,
    output [4:0] VHDC_COL,
	 output [6:0] VHDC_ROW,
    output [7:0] Led
   
    );
	 
	 wire reset;
	 assign reset = btn;
	 
	 assign VHDC_UARTRX_BOUNCE = VHDC_UARTRX;
	 assign VHDC_SYSACTIVE = ~reset;
	 
	wire [7:0]Led_wrap;
	
	assign Led =  (reset) ? Led_wrap : 8'b11000011;
	 
	 // Instantiate the module
	ClockBaseTop clockbasetop (
    .CLK(CLK), 
    .sw(sw), 
    .reset(reset), 
    .ct_UartRx(VHDC_UARTRX), 
    .ct_Led(Led_wrap),
	 .colOut(VHDC_COL),
	 .rowOut(VHDC_ROW)
    );


endmodule
