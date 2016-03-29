module mips55 (clk,reset);
  
  `include "op.v"
  
  //clock
  input clk;
  
  //reset
  input reset;
  
  
  //PC,IR,RF,DM write signal
  wire  PCWr, IRWr, RFWr, DMWr,ldsign;
  
  wire [1:0] CP0Wr;
 

  
  wire [31:0] RD1;
  wire [31:0] RD2;
  
  //A register
  reg [31:0] A;
  always@(RD1)
      A<=RD1;
  
  //B register
  reg [31:0] B;
  always@(posedge clk)
    B<=RD2;
  
  
  //ALUout
  wire [31:0] C;
  reg [31:0] ALUout;
  always@(posedge clk)
    ALUout<=C;
    
  
  //data memory
  wire [31:0] dm_out;
  reg [31:0] Dr;
  always@(posedge clk)
    Dr<=dm_out;
  
  //Mut_DIV
  wire [31:0] DA;
  assign DA=A;
  
  wire [31:0] DB;
  assign DB=B;
  
  wire [31:0] L32;
  wire [31:0] H32;      


        

  
  //im out data
  wire [31:0] im_out;
  reg [31:0] IR;
  
  always@(posedge clk)
    if(IRWr)
      IR<=im_out;
      
        
  //U_NPC input, UPC output
  wire [31:2] NPC;
  
  //pc + 4
  wire [31:2] PC_4;
  
  //RF A3 ??
  wire [4:0] A3;  
  
  //RF A2?? 
  wire [4:0] A2;
  assign A2=IR[20:16];
  
  //RF A1??
  wire [4:0] A1; 
  assign A1=IR[25:21]; 
  
  //gpr write data
  wire [31:0] WD;
  
  wire [31:2] PC;

  
  //32????
  wire [31:0] Imm32;  
  
  
  //alu A operation
  wire [31:0] ALU_A;  
  
  //ALU B operation
  wire [31:0] ALU_B; 
  
  //cp0 write port
  wire [4:0] CPA1;
  wire [4:0] CPA2;
  wire [4:0] CPA3;
  
  //cp0 write data
  wire [31:0] CPWD1;
  wire [31:0] CPWD2;
  
  //cp0 ReadData
  wire [31:0] CPRD;
  reg [31:0] CPout;
  
  always@(posedge clk)
    CPout=CPRD;
  
  wire [25:21] RS;
  assign RS=IR[25:21];
  
  wire [20:16] RT;
  assign RT=IR[20:16];
  
  wire [15:11] RD;
  assign RD=IR[15:11];
  
  
  /*controller signal*/  

  
  //ALU output is equal to 0
  wire Zero;
  
  //ALU output is greater then 0
  wire GTZ;
  
  //A select 
  wire [1:0] Asel;
  
  //B select  
  wire [1:0] Bsel;
  
  //RF ?????WD??
  wire  [1:0] WDSel;  
  
   //A3 select
  wire [1:0] RegSel;
  
  wire [1:0] CPA1Sel;
  
  //cp0 A2 select
  wire CPA2Sel;
  
  //cp0 A3 select
  wire CPA3Sel;
  
  //cp0 wd1 select
  wire CPWD1Sel;
  
  //cp0 wd2 select
  wire CPWD2Sel;
  
  //port MD.DB select
  wire DBsel;
  
  //Mut_div op
  wire [1:0] MDop;
  
  //Ext Op
  wire  [1:0] Extop;
  
  //ALU op
  wire  [3:0] ALUop;
  
  //NPCOp
  wire  [1:0] NPCop;
  
  //Byte Enable ????
  wire [3:0] Be;
  
  //mult_div data ready
  wire Ready;
    
  
  pc U_PC (NPC,PCWr,clk,reset,PC);
  
  im U_IM4K(PC[15:2],im_out);
  
  
  
  //gpr
  
  //A3 input MUX
  //0: RT
  //1: RD
  //2: 1FH
  mux4 #(.WIDTH(5)) MUX_A3(RT,RD,5'b11111,5'b00000,RegSel,A3);
  
  //WD input MUX
  //0: Aluout
  //1: Dr
  //2: PC
  //3: CPout
  mux4 #(.WIDTH(32)) MUX_WD(ALUout,Dr,{PC,2'b00},CPout,WDSel,WD);  
  
  gpr U_GPR(A1,A2,A3,WD,RFWr,clk,reset,RD1,RD2);
  
  
  //cp0
  
  mux2 #(.WIDTH(32)) MUX_WD1(ALUout,H32,CPWD1Sel,CPWD1);
  
  mux2 #(.WIDTH(32)) MUX_WD2(ALUout,L32,CPWD2Sel,CPWD2);
  
  mux4 #(.WIDTH(5)) MUX_CPA1(RD,`CP0_HI,`CP0_LO, 5'b0, CPA1Sel,CPA1);
  
  mux2 #(.WIDTH(5)) MUX_CPA2(RD,`CP0_HI ,CPA2Sel,CPA2);
  
  mux2 #(.WIDTH(5)) MUX_CPA3(RD,`CP0_LO ,CPA3Sel,CPA3);
  
  cp0 U_CP0(CPA1,CPA2,CPA3,CPWD1,CPWD2,CP0Wr,clk,reset,CPRD);
  
  
  //ext
  ext U_EXT(IR[15:0],Extop,Imm32);
  
  
  
  //ALU A 
  mux4 #(.WIDTH(32)) MUX_ALU_A(A,Imm32,0,0,Asel,ALU_A);
  //ALU  B
  //0: B
  //1: EXT
  //2: 0
  mux4 #(.WIDTH(32)) MUX_ALU_B(B,Imm32,0,0,Bsel,ALU_B);  
  //alu instance
  alu U_ALU(ALU_A,ALU_B,ALUop,Zero,GTZ,C);
  
  
  //mul_div
  mul_div U_MULDIV(DA,DB,clk,MDop,L32,H32);
  
  
  //NPC 
  npc U_NPC(PC,Imm32[25:0],NPCop,ALUout,NPC);
  
  
  //DM 
  dm U_DM4K(ALUout[11:2],Be,B,DMWr,ldsign,clk,dm_out);
  
  
  //Controller 
  controller U_CONTROLLER(clk,IR,Zero,GTZ,ALUout[11:0],PCWr,IRWr,RegSel,Extop,RFWr,WDSel,DMWr,ALUop,NPCop,CP0Wr,Asel,Bsel,CPWD1Sel,CPWD2Sel,CPA1Sel,CPA2Sel,CPA3Sel,MDop,Be,ldsign);
    
  
  
  
endmodule 