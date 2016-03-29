module mips (clk,reset);
  
  
  //clock
  input clk;
  
  //reset
  input reset;
  
  wire [31:0] RD1;
  wire [31:0] RD2;
  
  //A???
  reg [31:0] A;
  always@(RD1)
      A<=RD1;
  
  //B???
  reg [31:0] B;
  always@(posedge clk)
    B<=RD2;
  
  
  //ALUout
  wire [31:0] C;
  reg [31:0] ALUout;
  always@(posedge clk)
    ALUout<=C;
  
  //memory???????
  wire [31:0] dm_out;
  reg [31:0] Dr;
  always@(posedge clk)
    Dr<=dm_out;
    
    
  //PC,IR,RF,DM ????
  wire  PCWr, IRWr, RFWr, DMWr;
  
  //?????
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
  
  //U_PC ?? IM,NPC ??? 
  wire [31:2] PC_wire;
  
  wire [31:2] PC;

  
  //32????
  wire [31:0] Imm32;
 // assign Imm32=IR[];
  
  
  wire [31:0] ALU_A;
  assign ALU_A=A;
  
  
  //ALU ??????
  wire [31:0] ALU_B;
  
  
  
  /*controller ??*/
  

  

  
  //controller ?????ALU????????
  wire Zero;
  
  //B???????
  
  wire  Bsel;
  
  //RF ?????WD??
  wire  [1:0] WDSel;  
  
   //A3????
  wire [1:0] RegSel;
  
  //ExtOp
  wire  [1:0] Extop;
  
  //ALUop
  wire  [3:0] ALUop;
  
  //NPCOp
  wire  [1:0] NPCop;
  
  //Byte Enable ????
  wire [3:0] Be;
    

  
  pc U_PC (NPC,PCWr,clk,reset,PC);
  
  im U_IM4K(PC[11:2],im_out);
  
  //A3 input MUX
  mux4 #(.WIDTH(5)) MUX_A3(IR[20:16],IR[15:11],5'b11111,5'b00000,RegSel,A3);
  
  //WD input MUX
  mux4 #(.WIDTH(32)) MUX_WD(ALUout,Dr,{PC,2'b00},0,WDSel,WD);
  
  
  //?????
  gpr U_GPR(A1,A2,A3,WD,RFWr,clk,reset,RD1,RD2);
  
  
  //???????
  ext U_EXT(IR[15:0],Extop,Imm32);
  
  //ALU  B
  mux2 #(.WIDTH(32)) MUX_ALU_B(B,Imm32,Bsel,ALU_B);
  
  // 
  alu U_ALU(ALU_A,ALU_B,ALUop,Zero,C);
  
  
  //NPC 
  npc U_NPC(PC,Imm32[25:0],NPCop,NPC,PC_4);
  
  
  //DM 
  dm U_DM4K(ALUout[11:2],Be,B,DMWr,clk,dm_out);
  
  
  //Controller 
  controller U_CONTROLLER(clk,IR,Zero,PCWr,IRWr,RegSel,Extop,RFWr,WDSel,DMWr,ALUop,NPCop,Bsel,Be);
                      
  
  
  
endmodule 