`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:43:47 02/17/2015 
// Design Name: 
// Module Name:    ClockBaseTop 
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
module ClockBaseTop(
	input CLK,
	input sw,
	input reset,
	input ct_UartRx,
	//input        ct_ld_tx_data,
	//input  [7:0] ct_tx_data,
	//input        ct_tx_enable,
	//input        ct_rx_enable,
	//input        ct_rx_in,
	output [7:0] ct_Led,
	output [4:0] colOut,
	output [6:0] rowOut
);
	
	
	wire SRCK, RCK, EN, CLR;
	wire DMcolclk;
	wire [7:0] ct_sreg;
	wire ct_rx_in;
	wire [7:0] ct_rx_data;
	wire [7:0] ct_tx_data;
   //wire ct_txclk, ct_ld_tx_data, ct_tx_enable, ct_tx_out, ct_tx_empty, ct_rxclk, ct_uld_rx_data, ct_rx_enable, ct_rx_in, ct_rx_empty;
	reg ct_uld_rx_data;
	
	///===========================================================================
	// RX unloader decs
	///===========================================================================
	parameter LDWAIT = 2'b01, LDRESET = 2'b10, LDSKIP = 2'b11, LDRESET2 = 2'b00;
	
	
	reg [1:0] rxUnldState;
	reg [1:0] rxUnldNextState;
	reg [7:0] rxUnldBuf; 
	reg rxByteReady;
	
	///===========================================================================
	
	
	

	
	
	
	assign ct_tx_data = 8'b0000_0000;
	assign ct_tx_enable = 0;
	
	assign ct_rx_enable = 1;
//	assign ct_uld_rx_data = 1;	
	assign ct_rx_in = ct_UartRx;
	
	assign ct_Led = ledOutBuf;
	
	/*
	assign ct_Led[0] = ct_rx_enable;
	assign ct_Led[1] = ct_rx_in;
	assign ct_Led[2] = ct_rx_empty;
	assign ct_Led[3] = ct_rx_in;
	assign ct_Led[4] = ct_rxclk;
	assign ct_Led[7:5] = 3'b000;
	*/
	

	uart Uart (
		.reset(reset)      ,
		.txclk(ct_txclk)          ,
		.ld_tx_data(ct_ld_tx_data),      
		.tx_data(ct_tx_data)        ,
		.tx_enable(ct_tx_enable)      ,
		.tx_out(ct_tx_out)		    ,
		.tx_empty(ct_tx_empty)       ,
		.rxclk(ct_rxclk)          ,
		.uld_rx_data(ct_uld_rx_data)    ,
		.rx_data(ct_rx_data) ,
		.rx_enable(ct_rx_enable)      ,
		.rx_in(ct_rx_in)          ,
		.rx_empty(ct_rx_empty)
		);
	
	/*
	ShiftRegTop ShiftReg (
		.SIN(sw), 
		.SRCK(SRCK), 
		.RCK(RCK), 
		.EN(EN), 
		.CLR(reset), 
		.Sreg(ct_sreg)
	);
	*/
	
	`ifdef XILINX_ISIM
		defparam SRclkdiv.divval = 32'd100;
	`else
		defparam SRclkdiv.divval = 32'd10_000_000;
	`    endif
	
	
	
	defparam RXclkdiv.divval = 52;
	
		ClockDivider SRclkdiv (
	.clk_in(CLK),
	.reset(reset),
	.clk_out(DMcolclk)
	);


	ClockDivider RXclkdiv (
	.clk_in(CLK),
	.reset(reset),
	.clk_out(ct_rxclk)
	);
	
	

	
	
	///===========================================================================
	//  RX UNLOAD STATE MACHINE
	///===========================================================================
	
	always @ (*) begin
		
		case (rxUnldState)
			
			LDWAIT: begin
				rxByteReady = 0;
				if (!ct_rx_empty) begin //there is rx data to uld
					ct_uld_rx_data = 1;
					rxUnldNextState = LDSKIP;		
				end
				else begin
					rxUnldNextState = LDWAIT;	
					ct_uld_rx_data = 0;
				end
			end
			LDSKIP: begin
				rxUnldNextState = LDRESET;
				ct_uld_rx_data = 0;
				rxByteReady = 0;
			end 
			LDRESET: begin 
				rxUnldNextState = LDWAIT;
				rxByteReady = 1;
				ct_uld_rx_data = 0;
			end

			default: begin
				rxUnldNextState = LDWAIT;
				ct_uld_rx_data = 0;
				rxByteReady = 0;
			end
		endcase			
			
	end
	
	always@(negedge reset or posedge ct_rxclk) begin
		if (reset == 0) begin
			//ct reset ops
			rxUnldState <= LDWAIT;
			rxUnldBuf <= 8'b0000_0000;
		end
		else begin
			
			//=======================================
			// RX UNLOADER SEQ LOGIC
			//=======================================
			
			rxUnldState <= rxUnldNextState;
			
			case (rxUnldState)
				
				//LDWAIT: 
					//
				LDSKIP:
					rxUnldBuf <= ct_rx_data;
				//LDRESET: 
					
				//default:
				
			endcase
			//=======================================
		
		end	
	
	end
	
	///===========================================================================
	
	
	
	///===========================================================================
	///---------------------------------------------------------------------------
	//  RX DECODE STATE MACHINE
	///---------------------------------------------------------------------------
	///===========================================================================
	
	
	
	
		

	// UART RX MSG DECODER DECS----------------
	
	parameter RXD_IDLE = 6'b100000,  RXD_HEAD = 6'b010000,  RXD_BCNT = 6'b001000, RXD_BODY = 6'b000100, RXD_TAIL = 6'b000010, RXD_NULL = 6'b000001;
	parameter rxTIMEOUT = 100;
	parameter DATAMAXBYTES = 10;
	parameter SP_SYNC = 8'b01111110, SP_ESC = 8'b11111110, SP_END = 8'b00000011;
	
	reg [5:0] rxDecState;
	reg [5:0] rxDecStatePrev; // temp reg to restore prev state after esc bytes
	reg [5:0] rxDecNextState;
	
	reg rxStateEscReg;
	
	reg [7:0] msgHead;
	reg [7:0] msgData [DATAMAXBYTES-1:0];
	reg [7:0] msgTail ;
	reg [7:0] decBuf;
	reg [31:0] rxToutCntr;
	
	reg [7:0] nDataBytes;
	reg [7:0] nBytesRcvd;
	reg [7:0] rxDecBuf;
	reg [7:0] rxDecPreBuf;

	reg rxEscFlag; 
	reg rxStateReturn;
	reg rxMsgRetrieve;
	reg msgComplete;
	
	reg storeHead;
	reg storeData;
	reg storeTail;
	reg storeBcnt;
	
	reg clearData;
	integer i;
	
		//task defs
	
	
	//reset sequence for rxdecode SM
	task RxDecodeReset;
		begin
			for (i = 0; i < DATAMAXBYTES; i = i + 1) begin
					 msgData[i] <= 8'b00000000;	
			end
			rxDecState <= RXD_HEAD;
			
			
			rxMsgRetrieve <=0;
			//rxDecBuf <= 8'b0000_0000;
			msgHead <= 8'b0000_0000;
			
			rxStateEscReg <= 0;
			//rxDecBuf <= 8'b0000_0000; moved to DECtransfer stage
			msgTail <= 8'b0000_0000;
			nDataBytes <= 8'b0000_0000;
			nBytesRcvd <= 8'b0000_0000;
			rxToutCntr <=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
		end
	endtask
	
	task RxDataClear;
		begin
			for (i = 0; i < DATAMAXBYTES; i = i + 1) begin
					 msgData[i] <= 8'b00000000;	
			end
		end
	endtask
	
	
	function isSpecial;
	input inByte;
	begin
		if (inByte == SP_ESC ) 
			isSpecial = 1;
		else 
			isSpecial = 0;
	
	end
	endfunction
	
	//======================================
	// DECODER STATE COMB LOGIC
	always @ (*) begin
		
		
		


		if ((rxDecBuf == SP_ESC) && !rxStateEscReg) begin
						
			rxDecNextState = RXD_NULL;
			rxEscFlag = 1; // esc next 
			storeData = 0;
			storeTail = 0;
			storeBcnt = 0;
			storeHead = 0;
			clearData = 0;
			msgComplete = 0;
		end else if ((rxDecBuf == SP_SYNC) && !rxStateEscReg) begin		
			rxDecNextState = RXD_BCNT;
			storeHead = 1;
			clearData = 1;
			
			storeData = 0;
			rxEscFlag = 0;
			storeTail = 0;
			storeBcnt = 0;
			msgComplete = 0;
		end else begin
			rxEscFlag = 0; //always clear esc flag
			case (rxDecState)
		
				RXD_IDLE: begin
					
					msgComplete = 0;
					clearData = 0;
					storeData = 0;
					storeTail = 0;
					storeBcnt = 0;
					storeHead = 0;
					rxDecNextState = RXD_IDLE;
				
				end
				
				RXD_BCNT: begin
					msgComplete = 0;
					storeData = 0;
					storeTail = 0;
					storeHead = 0;
					storeBcnt = 1;
					clearData = 0;
					rxDecNextState = RXD_BODY;
					
				end
				
				RXD_HEAD: begin
					msgComplete = 0;
					storeData = 0;
					storeTail = 0;
					storeBcnt = 0;
					storeHead = 0;
					clearData = 0;
					rxDecNextState = RXD_IDLE;
					/*if(rxDecBuf == 8'b01111110) begin
						rxDecNextState = RXD_BCNT;
						storeHead = 1;
						clearData = 1;
					end else begin 
						rxDecNextState = RXD_HEAD;
						storeHead = 0;
						clearData = 0;
					end
					*/
				end
				
				RXD_BODY: begin
					msgComplete = 0;
					clearData = 0;
					storeTail = 0;
					storeBcnt = 0;
					storeHead = 0;
					if ((nBytesRcvd < (nDataBytes - 1)) && (nBytesRcvd < DATAMAXBYTES)) begin
					// If still have packets to receive	
						rxDecNextState = RXD_BODY;
						storeData = 1;
					end else begin
						rxDecNextState = RXD_TAIL;
						storeData = 1;
					end
				
				end

				RXD_TAIL: begin
					msgComplete = 1;
					storeData = 0;
					storeTail = 0;
					storeBcnt = 0;
					storeHead = 0;
					clearData = 0;
					rxDecNextState = RXD_IDLE;
					/*if(rxDecBuf == 8'b01111110) begin
						rxDecNextState = RXD_BCNT;
						storeHead = 1;
						clearData = 1;
					end else begin 
						rxDecNextState = RXD_HEAD;
						storeHead = 0;
						clearData = 0;
					end
					*/
				end
				
				default: begin
					msgComplete = 0;
					storeBcnt = 0;
					storeHead = 0;
					storeData = 0;
					storeTail = 0;
					clearData = 0;
					rxDecNextState = RXD_IDLE;
				end
				
			endcase
		end
	end
	
	
	//======================================
	// Pre-DECODE TRANSFER STAGE
	//----------------------------------
	/*Delays decode one cycle so processing of byte
	and data storage occur the cycle after rxDecBuf has 
	been loaded */
	
	reg rxDecReady;
	
	always @ (posedge ct_rxclk or negedge reset) begin
			
		if(!reset) begin
			rxDecReady <= 0;
			rxDecBuf <= 8'b00000000;
			//rxDecPreBuf <= 8'b00000000;
		end else if(rxByteReady) begin
			rxDecBuf <= rxUnldBuf;
			//rxDecPreBuf <= rxUnldBuf;
			rxDecReady <= 1;
		end else if(rxDecReady == 1) begin
			rxDecReady <= 0;
		end
	end
	//---------------------
	//================================
	
	
	
	//======================================
	// DECODER STATE SEQUENTIAL LOGIC
	
	always @ (posedge ct_rxclk or negedge reset) begin
		
		if(!reset) begin
		
			RxDecodeReset();
					
		end
		else begin
			if (rxToutCntr > rxTIMEOUT ) begin
			// message timeout handler
			// restart state machine and wait for new msg
			//test2
			end
			
			if(msgComplete)begin
			 rxMsgRetrieve <= 1;
			
			end else if(rxMsgRetrieve) begin
				rxMsgRetrieve <=0;
			end
			
			
			
			//rxDecBuf <= rxUnldBuf;
			//added this comment
			if(rxDecReady) begin 
			// advance state and process byte accordingly
				//rxDecBuf <= rxUnldBuf;
				
				//rxDecBuf <= rxDecPreBuf;
				rxToutCntr <= 0;
				rxDecStatePrev <= rxDecState; //store prev state to jump back in case of ESC\				
				

				// set ESC reg if current byte is ESC, else clear it
				if (rxEscFlag) begin
					//dont update state on ESC byte
					rxStateEscReg <= 1;
				end else begin
					rxStateEscReg <= 0;
					rxDecState <= rxDecNextState;
					
					if(storeHead) begin
						msgHead <= rxDecBuf;
					end
					if(clearData) begin
						RxDataClear; //reset msgData
						nDataBytes <= 8'b0000_0000;
						nBytesRcvd <= 8'b0000_0000;
					end			
					if(storeBcnt) begin
						nDataBytes <= rxDecBuf;
					end
					if(storeData) begin
						nBytesRcvd <= nBytesRcvd + 1;
						msgData [nBytesRcvd] <= rxDecBuf;
					end
				end
			


			
			end	
		end
	
		
		
	end
	
	///===========================================================================
	//  MESSAGE HANDLER AND DISTRIBUTION LOGIC
	///===========================================================================
	wire DMwrite_top,DMenable_top;
	wire [4:0] DMcolAddr_top;
	wire [6:0] DMrowin_top;
	wire [31:0] msg_top; 
	
	assign msg_top = {msgData[0],msgData[1],msgData[2],msgData[3]};

	// Instantiate the module
	MessageHandler instance_name (
		 .Msg(msg_top), 
		 .msgReady(rxMsgRetrieve), 
		 .clk(ct_rxclk), 
		 .reset(reset), 
		 .DMwrite(DMwrite_top), 
		 .DMenable(DMenable_top), 
		 .DMcolAddr(DMcolAddr_top), 
		 .DMrowin(DMrowin_top)
		 );
		

		
	///===========================================================================
	//  DOT MATRIX CONTROLLER
	///===========================================================================	
	
	
	
			// Instantiate the module
	DotController dotcontroller(
		 .colAddr(DMcolAddr_top), 
		 .rowIn(DMrowin_top), 
		 .enable(DMenable_top), 
		 .write(DMwrite_top), 
		 .reset(reset), 
		 .logicclk(ct_rxclk), 
		 .colclk(DMcolclk), 
		 .colOut(colOut), 
		 .rowOut(rowOut)
		 );

	///===========================================================================
	//  LED MESSAGE DISPLAY LOGIC
	///===========================================================================
	reg[3:0] ledMsgInd;
	reg[7:0] ledOutBuf;
	always @ (posedge SRCK or negedge reset) begin
		if (!reset) begin
			ledMsgInd = 0;
			ledOutBuf = 8'b00000000;
		end else begin
			
			if(nBytesRcvd == 0) begin
				ledOutBuf = 8'b00000000;
			end else begin
				if (ledMsgInd >= (nBytesRcvd - 1)) begin
					ledMsgInd = 0;
				end else begin
					ledMsgInd = ledMsgInd + 1;
				end	
				
				ledOutBuf = msgData[ledMsgInd]; 			
			end			
		end	
	end	
	
	
	///===========================================================================
	
endmodule


