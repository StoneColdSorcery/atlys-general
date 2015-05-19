`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:46:14 02/17/2015 
// Design Name: 
// Module Name:    ClockDivider 
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
module ClockDivider(
    input clk_in,
	 input reset,
    output reg clk_out
    );
	 
parameter divval = 10;

reg[31:0] cntr;


always @( posedge clk_in or negedge reset) begin
	if(reset == 0) begin
		cntr <= 32'd0 ;
		clk_out <= 0;
	end
	else begin
		if(cntr == divval)                             
			begin
			cntr <= 0;
			clk_out <= ~clk_out;
			end
		else
			begin
			cntr <= cntr + 32'd1;
			end
	end
end	



endmodule
