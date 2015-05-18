`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:21:19 02/16/2015 
// Design Name: 
// Module Name:    ShiftRegTop 
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
module ShiftRegTop(
    input SIN,
    input SRCK,
    input RCK,
    input EN,
    input CLR,
    output reg [7:0] Sreg
    );
	
	//reg [7:0] POUT;
	//reg [7:0] Sreg;

always @(posedge SRCK or negedge CLR)
begin
	if(~CLR)
	begin
		Sreg[7:0] <= 8'b00000000;
	end
	//if(~EN) // if EN is low then shift
	else
	begin
		Sreg[7] <= SIN;
		Sreg[6] <= Sreg [7];
		Sreg[5] <= Sreg [6];
		Sreg[4] <= Sreg [5];
		Sreg[3] <= Sreg [4];
		Sreg[2] <= Sreg [3];
		Sreg[1] <= Sreg [2];
		Sreg[0] <= Sreg [1];
	end
end


//assign Led[7:0] = Sreg[7:0];

/*
always@(posedge RCK)
begin
	POUT[7:0] <= Sreg[7:0];
end
*/

endmodule