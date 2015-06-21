`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:35:17 05/05/2015
// Design Name:   ClockBaseTop
// Module Name:   C:/Users/Crazyfingers/Documents/Atlys Projects/ShiftRegister/test2sr.v
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

module test2sr;

	// Inputs
	reg CLK;
	reg sw;
	reg reset;
	reg UartRx_Pin;
	reg sendOut;
	reg us_enable;
	// Outputs
	wire [7:0] Led;
	reg [7:0] sendByte;
	wire [6:0] rowOut;
	wire [4:0] colOut;
	// Instantiate the Unit Under Test (UUT)
	ClockBaseTop uut (
		.CLK(CLK), 
		.sw(sw), 
		.reset(reset), 
		.ct_UartRx(UartRx_Pin), 
		.ct_Led(Led)
	);
	



	task printData;
	integer j;
	
	begin
		for (j = 0; j < 10; j = j + 1) begin
			$write("%0d: %b",j,uut.msgData[j]);	
			if(j != 9) begin
			$write(", ");
			end else begin
			$write("\n-------\n");
			end
		end
	end
	endtask
	
	task uartsend;
	
	input [8:0] byteToSend;
	//input en;
	//output sendOut;
	integer i;
	
	begin
	
		if (us_enable) begin
			sendOut = 0;
			#17360;
			for (i = 0; i < 8; i = i + 1) begin
				sendOut = byteToSend[i];
				#17360;
			end
			sendOut = 1;
			#17360;
		end else begin
			sendOut = 1;
		end
	end
	endtask
	
	always @ (sendOut) begin
		if (sendOut == 1'bx) begin
			UartRx_Pin = 1;
		end else begin
			UartRx_Pin = sendOut;
		end
	end
	
	task msgDM_enable;
		begin
		uartsend(8'b01111110);
		uartsend(8'b00000100);
		uartsend(8'b10101000);
		uartsend(8'b00000000);
		uartsend(8'b00000000);
		uartsend(8'b00000000);
		end
	endtask
	
	task msgDM_set(input [4:0] col, input [6:0] rowdata);

		begin
		uartsend(8'b01111110);
		uartsend(8'b00000011);
		uartsend(8'b10101100);
		uartsend({3'b000,col});
		uartsend({1'b0,rowdata});
		//uartsend(8'b00000000);
		end
	endtask
	//assign UartRx_Pin = (sendOut == 1'bx) ? 1'b1 : sendOut;
	/*
	always @ (sendByte or us_enable) begin
	 uartsend(sendByte);
	 //uartsend(sendByte,us_enable, UartRx_Pin);
	end
	*/
	initial begin
		// Initialize Inputs
		CLK = 0;
		sw = 0;
		reset = 1;
		//sendByte = 8'b00000000;
		us_enable = 1;
		sendOut = 1;
		//UartRx_Pin = 1;
		//000000
		#10
		reset = 0;
		// Wait 100 ns for global reset to finish
		#100;
       reset = 1;
		#10000;
		us_enable = 1;
		#100;
		/*
		UartRx_Pin = 0;
		// Add stimulus here
		#17360;
		UartRx_Pin = 1;
		#17360;
		UartRx_Pin = 0;
		#17360;
		#17360;
		UartRx_Pin = 1;
		*/
	
		//sendByte = 8'b11110100;
		
		#1000;
		msgDM_enable;
		#1000;
		msgDM_set(0,7'b1111111);
		msgDM_set(1,7'b1111100);
		msgDM_set(2,7'b1111000);
		msgDM_set(3,7'b1100000);
		msgDM_set(4,7'b1000000);
		//msgDM_set(5'd2,7'b1111000);
		/*
		//uartsend(0'b11110100,us_enable, UartRx_Pin);
		uartsend(8'b11110100);
		#1000;
		uartsend(8'b01111110);
		#100;
		uartsend(8'b00000011);
		#100;
		uartsend(8'b00000001);
		#100;
		uartsend(8'b00000001);
		#100;
		uartsend(8'b11111110);
		#100;
		uartsend(8'b01111110);
		#100;
		uartsend(8'b00000001);
		#100;
		//#600000;
		printData;
		
		//-------------------------
		uartsend(8'b01111110);
		#100;
		uartsend(8'b00001000);
		#100;
		uartsend(8'b11000000);
		#100;
		uartsend(8'b11110000);
		#100;
		uartsend(8'b11111110);
		#100;
		//uartsend(8'b01111110);
		uartsend(8'b11111110);
		#100;
		uartsend(8'b11111100);
		#100;
		uartsend(8'b11111111);
		
		printData;
		//-------------------------
		uartsend(8'b01111110);
		#100;
		uartsend(8'b00001000);
		#100;
		uartsend(8'b00001111);
		#100;
		uartsend(8'b11110000);		
		#100;
		uartsend(8'b00000000);	
		#100
		printData;
		//-------------------------
		uartsend(8'b01111110);
		#100;
		uartsend(8'b11111110);
		#100;
		uartsend(8'b00000011);
		#100;
		uartsend(8'b00000000);	
		#100;
		uartsend(8'b11111110);		
		#100;
		uartsend(8'b00000000);	
		#100;
		uartsend(8'b00000000);	
		#100
		printData;
		
		*/
	end
	
	always #5 CLK = ~CLK;
      
endmodule

