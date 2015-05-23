////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: ShiftRegTop_synthesis.v
// /___/   /\     Timestamp: Tue Feb 17 16:20:21 2015
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim ShiftRegTop.ngc ShiftRegTop_synthesis.v 
// Device	: xc6slx45-2-csg324
// Input file	: ShiftRegTop.ngc
// Output file	: C:\Users\Crazyfingers\Documents\Atlys Projects\ShiftRegister\netgen\synthesis\ShiftRegTop_synthesis.v
// # of Modules	: 1
// Design Name	: ShiftRegTop
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module ShiftRegTop (
  SIN, SRCK, RCK, EN, CLR, Sreg
);
  input SIN;
  input SRCK;
  input RCK;
  input EN;
  input CLR;
  output [7 : 0] Sreg;
  wire SIN_IBUF_0;
  wire SRCK_BUFGP_1;
  wire CLR_IBUF_2;
  wire Sreg_7_3;
  wire Sreg_6_4;
  wire Sreg_5_5;
  wire Sreg_4_6;
  wire Sreg_3_7;
  wire Sreg_2_8;
  wire Sreg_1_9;
  wire Sreg_0_10;
  wire CLR_inv;
  wire Sreg_7_1_23;
  FDC   Sreg_0 (
    .C(SRCK_BUFGP_1),
    .CLR(CLR_inv),
    .D(Sreg_1_9),
    .Q(Sreg_0_10)
  );
  FDC   Sreg_1 (
    .C(SRCK_BUFGP_1),
    .CLR(CLR_inv),
    .D(Sreg_2_8),
    .Q(Sreg_1_9)
  );
  FDC   Sreg_2 (
    .C(SRCK_BUFGP_1),
    .CLR(CLR_inv),
    .D(Sreg_3_7),
    .Q(Sreg_2_8)
  );
  FDC   Sreg_3 (
    .C(SRCK_BUFGP_1),
    .CLR(CLR_inv),
    .D(Sreg_4_6),
    .Q(Sreg_3_7)
  );
  FDC   Sreg_4 (
    .C(SRCK_BUFGP_1),
    .CLR(CLR_inv),
    .D(Sreg_5_5),
    .Q(Sreg_4_6)
  );
  FDC   Sreg_5 (
    .C(SRCK_BUFGP_1),
    .CLR(CLR_inv),
    .D(Sreg_6_4),
    .Q(Sreg_5_5)
  );
  FDC   Sreg_6 (
    .C(SRCK_BUFGP_1),
    .CLR(CLR_inv),
    .D(Sreg_7_3),
    .Q(Sreg_6_4)
  );
  FDC   Sreg_7 (
    .C(SRCK_BUFGP_1),
    .CLR(CLR_inv),
    .D(SIN_IBUF_0),
    .Q(Sreg_7_3)
  );
  IBUF   SIN_IBUF (
    .I(SIN),
    .O(SIN_IBUF_0)
  );
  IBUF   CLR_IBUF (
    .I(CLR),
    .O(CLR_IBUF_2)
  );
  OBUF   Sreg_7_OBUF (
    .I(Sreg_7_1_23),
    .O(Sreg[7])
  );
  OBUF   Sreg_6_OBUF (
    .I(Sreg_6_4),
    .O(Sreg[6])
  );
  OBUF   Sreg_5_OBUF (
    .I(Sreg_5_5),
    .O(Sreg[5])
  );
  OBUF   Sreg_4_OBUF (
    .I(Sreg_4_6),
    .O(Sreg[4])
  );
  OBUF   Sreg_3_OBUF (
    .I(Sreg_3_7),
    .O(Sreg[3])
  );
  OBUF   Sreg_2_OBUF (
    .I(Sreg_2_8),
    .O(Sreg[2])
  );
  OBUF   Sreg_1_OBUF (
    .I(Sreg_1_9),
    .O(Sreg[1])
  );
  OBUF   Sreg_0_OBUF (
    .I(Sreg_0_10),
    .O(Sreg[0])
  );
  BUFGP   SRCK_BUFGP (
    .I(SRCK),
    .O(SRCK_BUFGP_1)
  );
  INV   CLR_inv1_INV_0 (
    .I(CLR_IBUF_2),
    .O(CLR_inv)
  );
  FDC   Sreg_7_1 (
    .C(SRCK_BUFGP_1),
    .CLR(CLR_inv),
    .D(SIN_IBUF_0),
    .Q(Sreg_7_1_23)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

