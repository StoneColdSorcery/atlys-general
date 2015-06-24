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
	 input sw,
	 input btn,
    input JB[7:0],
	 output [11:0] VHDCIIO1,
	 output [7:0] Led
    );
	 
	 wire reset,pm_uart;
	 wire [6:0] VHDC_ROW;
	 wire [4:0] VHDC_COL;
	 
	 assign VHDCIIO1 = {VHDC_COL,VHDC_ROW};
	 
	 assign pm_uart = JB[0];
	 assign reset = btn;
	 
	 //assign VHDC_UARTRX_BOUNCE = VHDC_UARTRX;
	 //assign VHDC_SYSACTIVE = ~reset;
	 
	wire [7:0] Led_wrap;
	
	assign Led =  (reset) ? Led_wrap : {3'b111,VHDC_COL};
	 
	 // Instantiate the module
	ClockBaseTop clockbasetop (
    .CLK(CLK), 
    .sw(sw), 
    .reset(btn), 
    .ct_UartRx(pm_uart), 
    .ct_Led(Led_wrap),
	 .colOut(VHDC_COL),
	 .rowOut(VHDC_ROW)
    );


endmodule




/*

module CBIOWrapper(
	 input CLK,
	 input btn,
	 input sw,
    inout [19:0] VHDCIIO1,
    output [7:0] Led
   
    );
	 
	 wire reset,VHDC_UARTRX,VHDC_UARTRX_BOUNCE,VHDC_SYSACTIVE;
	 wire [6:0] VHDC_ROW;
	 wire [4:0] VHDC_COL;
	 
	 assign VHDCIIO1 = {3'bzzz,VHDC_SYSACTIVE,VHDC_UARTRX_BOUNCE,VHDC_UARTRX,2'bzz,VHDC_COL,VHDC_ROW};
	 //{VHDC_COL,VHDC_ROW,2'bzz,VHDC_UARTRX,VHDC_UARTRX_BOUNCE,VHDC_SYSACTIVE,3'bzzz};
								
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


*/
