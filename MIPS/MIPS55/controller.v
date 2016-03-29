module controller(clk,IR,Zero,GEZ,dmaddr,intr,PCWr,IRWr,RegSel,ExtOp,RFWr,WDSel,DMWr,ALUop,NPCOp,CP0Wr,Asel,Bsel,WD1Sel,WD2Sel,CPA1Sel,CPA2Sel,CPA3Sel,MDop,Be,ldsign,EPCWr);
  
  `include "op.v"
  
  input clk;
  
  input [31:0] IR;
  
  input Zero;
  
  input GEZ;
  
  input [11:0] dmaddr;
  
  input intr;
  
  output PCWr,RFWr,DMWr;
  
  output IRWr;
  
  output WD1Sel;
  
  output WD2Sel;
  
  output [1:0] CPA1Sel;
  
  output CPA2Sel;
  
  output CPA3Sel;
  
  output [1:0] WDSel;
  
  output [1:0] RegSel;
  
  output [1:0] Bsel;
  
  output [1:0] Asel;
  
  output [1:0] ExtOp;
  
  output [3:0] ALUop;
  
  output [1:0] CP0Wr;
  
  output [1:0] NPCOp;
  
  output [1:0] MDop;
  
  output [3:0] Be;
  
  output ldsign;
  
  output EPCWr;
  
  wire [3:0] newfsm;
  
  reg [3:0] fsm;  
  
  wire [5:0] op;
  
  wire [5:0] func;
  
  wire [4:0] rs;
  
  wire [4:0] rt;
  
  wire [4:0] rd;
  
  wire S0;
  wire S1;
  wire S2;
  wire S3;
  wire S4;
  wire S5;
  wire S6;
  wire S7;
  wire S8;
  wire S9;

//instructions
  wire ADD ;
  wire ADDU;
  wire AND ;
  wire NOR ;
  wire OR  ;
  wire SUB ;
  wire SUBU;
  wire XOR ;
  wire SLT ;
  wire SLTU;
  wire SRAV;
  wire SRLV;
  wire SLLV;
           
  wire ORI ;
  wire ADDI;
  wire ANDI;
  wire XORI;
  wire LUI ;
  wire ADDIU;
  wire SLTI;
  wire SLTIU;
           
  wire SLL ;
  wire SRA ;
  wire SRL ;
           
  wire J   ;
  wire JAL ;
           
  wire JALR;
  wire JR  ;
           
  wire LB  ;
  wire LBU ;
  wire LH  ;
  wire LHU ;
  wire LW  ;
           
  wire SB  ;
  wire SH  ;
  wire SW  ;
           
  wire BEQ ;
  wire BNE ;
  wire BGEZ;
  wire BGTZ;
  wire BLEZ;
  wire BLTZ;
           
  wire MFC0;
  wire MFHI;
  wire MFLO;
           
  wire MTC0;
  wire MTHI;
  wire MTLO;
          
  wire MULT;
  wire MULTU;
  wire DIV;
  wire DIVU;
  
  wire SYSCALL;
  wire BREAK;
  wire ERET;
//assign
//

  assign ADD = ( op == `OP_ADD && func==`FUNC_ADD );  
  assign ADDU= ( op == `OP_ADDU && func==`FUNC_ADDU );
  assign AND = ( op == `OP_AND && func==`FUNC_AND);
  assign NOR = ( op == `OP_NOR && func==`FUNC_NOR);
  assign OR  = ( op == `OP_OR  && func==`FUNC_OR);
  assign SUB = ( op == `OP_SUB && func==`FUNC_SUB);
  assign SUBU= ( op == `OP_SUBU && func==`FUNC_SUBU);
  assign XOR = ( op == `OP_XOR  && func==`FUNC_XOR);
  assign SLT = ( op == `OP_SLT  && func==`FUNC_SLT);
  assign SLTU= ( op == `OP_SLTU && func==`FUNC_SLTU);
  assign SRAV= ( op == `OP_SRAV && func==`FUNC_SRAV);
  assign SRLV= ( op == `OP_SRLV && func==`FUNC_SRLV);
  assign SLLV= ( op == `OP_SLLV && func==`FUNC_SLLV);

  assign ORI = ( op == `OP_ORI  );
  assign ADDI= ( op == `OP_ADDI );
  assign ANDI= ( op == `OP_ANDI );
  assign XORI= ( op == `OP_XORI );
  assign LUI = ( op == `OP_LUI  );
  assign ADDIU=( op == `OP_ADDIU );
  assign SLTI= ( op == `OP_SLTI );
  assign SLTIU=( op == `OP_SLTIU );

  assign SLL = ( op == `OP_SLL  && func==`FUNC_SLL);
  assign SRA = ( op == `OP_SRA  && func==`FUNC_SRA);
  assign SRL = ( op == `OP_SRL  && func==`FUNC_SRL);

  assign J   = ( op == `OP_J    );
  assign JAL = ( op == `OP_JAL  );

  assign JALR= ( op == `OP_JALR && func==`FUNC_JALR);
  assign JR  = ( op == `OP_JR   && func==`FUNC_JR);

  assign LB  = ( op == `OP_LB   );
  assign LBU = ( op == `OP_LBU  );
  assign LH  = ( op == `OP_LH   );
  assign LHU = ( op == `OP_LHU  );
  assign LW  = ( op == `OP_LW   );

  assign SB  = ( op == `OP_SB   );
  assign SH  = ( op == `OP_SH   );
  assign SW  = ( op == `OP_SW   );

  assign BEQ = ( op == `OP_BEQ  );
  assign BNE = ( op == `OP_BNE  );
  assign BGEZ= ( op == `OP_BGEZ && rt==`FUNC_BGEZ);
  assign BGTZ= ( op == `OP_BGTZ );
  assign BLEZ= ( op == `OP_BLEZ );
  assign BLTZ= ( op == `OP_BLTZ && rt==`FUNC_BLTZ);

  assign MFC0= ( op == `OP_MFC0 && rs==`FUNC_MFC0);
  assign MFHI= ( op == `OP_MFHI && func==`FUNC_MFHI);
  assign MFLO= ( op == `OP_MFLO && func==`FUNC_MFLO);

  assign MTC0= ( op == `OP_MTC0 && rs==`FUNC_MTC0);
  assign MTHI= ( op == `OP_MTHI && func==`FUNC_MTHI);
  assign MTLO= ( op == `OP_MTLO && func==`FUNC_MTLO);

  assign MULT= ( op == `OP_MULT && func==`FUNC_MULT);
  assign MULTU=( op == `OP_MULT && func==`FUNC_MULTU);
  assign DIV=  ( op == `OP_DIV  && func==`FUNC_DIV);
  assign DIVU= ( op == `OP_DIVU && func==`FUNC_DIVU);
  
  assign SYSCALL= ( op == `OP_SYSCALL && func==`FUNC_SYSCALL);
  assign BREAK= ( op == `OP_BREAK && func==`FUNC_BREAK);
  assign ERET= ( op == `OP_ERET && func==`FUNC_ERET);
  

  
  wire   IMM_INSTR;
  assign IMM_INSTR=( ORI | ADDI| ANDI| XORI| LUI | ADDIU| SLTI| SLTIU);
  
  wire   SHIFT_INSTR;
  assign SHIFT_INSTR=( SLL | SRA | SRL );

  wire J_INSTR;
  assign J_INSTR=( J | JAL );

  wire JR_INSTR;
  assign JR_INSTR=( JALR| JR );

  wire LD_INSTR;
  assign LD_INSTR=( LB | LBU | LH  | LHU | LW  );

  wire ST_INSTR;
  assign ST_INSTR=( SB | SH | SW ) ;

  wire B_INSTR;
  assign B_INSTR=( BEQ | BNE | BGEZ| BGTZ| BLEZ| BLTZ ); 

  wire MF_INSTR;
  assign MF_INSTR=( MFC0| MFHI| MFLO );


  wire MT_INSTR;
  assign MT_INSTR=( MTC0| MTHI| MTLO );


  wire MD_INSTR;
  assign MD_INSTR=( MULT| MULTU| DIV| DIVU );
  
  wire   R_INSTR;
  assign R_INSTR=(op==0)&(~J_INSTR)&(~JR_INSTR)&(~LD_INSTR)&(~ST_INSTR)&(~B_INSTR)&(~MF_INSTR)&(~MT_INSTR)&(~MD_INSTR);
  
  wire   ALU_INSTR;
  assign ALU_INSTR=R_INSTR|IMM_INSTR|SHIFT_INSTR;
  
  wire  INT_INSTR;
  assign INT_INSTR=BREAK|SYSCALL;

  
    
  assign op=IR[31:26];
  
  assign func=IR[5:0];
  
  assign rs=IR[25:21];
  
  assign rt=IR[20:16];
  
  assign rd=IR[15:11];
  
  
  assign S0 = (fsm==0);
  assign S1 = (fsm==1);
  assign S2 = (fsm==2);
  assign S3 = (fsm==3);
  assign S4 = (fsm==4);
  assign S5 = (fsm==5);
  assign S6 = (fsm==6);
  assign S7 = (fsm==7);
  assign S8 = (fsm==8);
  assign S9 = (fsm==9);
  assign S10=(fsm==10);
  
  wire GTZ;
  assign GTZ=GEZ&(~Zero);
  
  wire LTZ;
  assign LTZ=~GEZ;
  
  assign PCWr=S0|(S8&B_INSTR&(BEQ&Zero|BNE&~Zero|BGTZ&GTZ|BLEZ&~GTZ|BGEZ&GEZ|BLTZ&LTZ))|(S9&J_INSTR)|S7&(JR_INSTR);
  
  assign IRWr=S0;
  
  assign RegSel=({2{R_INSTR|JR_INSTR|MFHI|MFLO}}&1)|({2{J_INSTR}}&2);
  
  assign ExtOp=({2{LD_INSTR|ST_INSTR|ADDI|ADDIU|SLTI|SLTIU}}&`SE)|({2{SHIFT_INSTR}}&`HZE)|({2{LUI}}&`HC);
  
  assign RFWr=(S7&ALU_INSTR)|(S9&JAL)|(S7&JALR)|(S4&LD_INSTR)|(S7&MF_INSTR);
  
  assign WDSel=({2{(LD_INSTR|ST_INSTR)}}&1)|({2{J_INSTR|JR_INSTR}}&2)|({2{MF_INSTR}}&3);
  
  assign DMWr=S5&ST_INSTR;
  
  ALU_OP U_ALU_OP(op,func,ALUop);
  
  assign NPCOp=({2{S0}}&`PC_4)|({2{J_INSTR&(~S0)}}&`PC_JAL)|({2{JR_INSTR&(~S0)}}&`PC_ALUOUT)|({2{B_INSTR&(~S0)}}&`PC_BRANCH);
  
  assign Bsel=({2{IMM_INSTR|LD_INSTR|ST_INSTR}}&1)|({2{BGEZ|BGTZ|MTHI|MTLO}}&2);
  
  assign Asel=({2{SHIFT_INSTR}}&1)|({2{MTC0}}&2);
  
  assign ldsign=LB|LH;
  
  assign Be=({4{LW|SW}}&4'b1111)|({4{LH|LHU|SH}}&(4'b0011<<(2*dmaddr[1])))|({4{LB|LBU|SB}}&(4'b0001<<(dmaddr[1:0])));

  assign CP0Wr=({2{S7&MD_INSTR}}&2'b11)|({2{S7&(MTC0|MTHI)}}&2'b10)|({2{S7&(MTLO)}}&2'b01);
  
  assign WD1Sel=MD_INSTR;
  
  assign WD2Sel=MD_INSTR;
  
  assign CPA1Sel=({2{MFHI}}&2'b01)|({2{MFLO}}&2'b10);
  
  assign CPA2Sel=MTHI|MD_INSTR;
  
  assign CPA3Sel=MTLO|MD_INSTR;
  
  assign MDop=({2{MULT}}&`MD_MULT)|({2{MULTU}}&`MD_MULTU)|({2{DIV}}&`MD_DIV)|({2{DIVU}}&`MD_DIVU);
    
  m_fsm U_FSM(fsm,ALU_INSTR,J_INSTR,JR_INSTR,LD_INSTR,ST_INSTR,B_INSTR,MF_INSTR, MT_INSTR,MD_INSTR,newfsm);
  
  //assign EPCWr=INT_INSTR|insr;

  initial 
  begin
    fsm=0;
  end
  always@(posedge clk)
  begin
      //$monitor( "fsm=%d,PCWr=%d,NPCop=%d,IRWr=%d,RFWr=%d,DMWr=%d,ALUop=%d,RegSel=%d,WDSel=%d,ExtOp=%d,BSel=%d,Be=%d", fsm, PCWr,NPCOp,IRWr,RFWr,DMWr,ALUop,RegSel,WDSel,ExtOp,Bsel,Be ) ;
      fsm <= newfsm; 
  end
  
  
endmodule

module m_fsm(fsm,ALU_INSTR,J_INSTR,JR_INSTR,LD_INSTR,ST_INSTR,B_INSTR,MF_INSTR, MT_INSTR,MD_INSTR,INT_INSTR,intr,newfsm);
   
   
   input ALU_INSTR,J_INSTR,JR_INSTR,LD_INSTR,ST_INSTR,B_INSTR,MF_INSTR, MT_INSTR,MD_INSTR,INT_INSTR,intr;
   
   input [3:0] fsm;
   
   output reg [3:0] newfsm;

   
  always @(*)
  case(fsm)
    0: newfsm<=1;
    1:begin 
      if(ALU_INSTR|JR_INSTR|MF_INSTR|MT_INSTR|MD_INSTR)
          newfsm<=6;
       if(LD_INSTR|ST_INSTR)
          newfsm<=2;
       if(J_INSTR)
          newfsm<=9;
       if(B_INSTR)
          newfsm<=8;
       if(INT_INSTR)
          newfsm<=10;
    end       
    2: begin
       if(LD_INSTR)
          newfsm<=3;
       if(ST_INSTR)
          newfsm<=5;
       end
    3:newfsm<=4;
    4:if(intr) 
        newfsm<=10;
      else
        newfsm<=0;
    5:if(intr) 
        newfsm<=10;
      else
        newfsm<=0;
    6:newfsm<=7;
    7:if(intr) 
        newfsm<=10;
      else
        newfsm<=0;
    8:if(intr) 
        newfsm<=10;
      else
        newfsm<=0;
    9:if(intr) 
        newfsm<=10;
      else
        newfsm<=0;
    default: newfsm<=0;
  endcase   
   
   
endmodule 


module ALU_OP(op,func,alu_op);
  
    input [31:26] op;
    
    input [5:0] func;
    
    output reg [3:0] alu_op;
    
    reg [3:0] op_tb [63:0];
    
    reg [3:0] func_tb [63:0];
    
    always@(*)
    begin
        if (op==0)
           alu_op <= func_tb[func];
        else
           alu_op <= op_tb[op];
    end


    integer i;
    
    initial
    begin
        for(i=0;i<=63;i=i+1) 
        begin
            op_tb[i]<=0;
            func_tb[i]<=0;
        end
        
        op_tb[`OP_ADDI]<=`ADD;
        op_tb[`OP_ADDIU]<=`ADD;
        op_tb[`OP_ANDI]<=`AND;
        op_tb[`OP_BEQ]<=`SUB;
        op_tb[`OP_BGEZ]<=`SUB;
        op_tb[`OP_BGTZ]<=`SUB;
        op_tb[`OP_BLEZ]<=`SUB;
        op_tb[`OP_BLTZ]<=`SUB;
        op_tb[`OP_BNE]<=`SUB;
        op_tb[`OP_JALR]<=`OR;
        op_tb[`OP_JR]<=`OR;
        op_tb[`OP_LB]<=`ADD;
        op_tb[`OP_LBU]<=`ADD;
        op_tb[`OP_LH]<=`ADD;
        op_tb[`OP_LHU]<=`ADD;
        op_tb[`OP_LUI]<=`OR;
        op_tb[`OP_LW]<=`ADD;
        op_tb[`OP_ORI]<=`OR;
        op_tb[`OP_SB]<=`ADD;
        op_tb[`OP_SH]<=`ADD;
        op_tb[`OP_SLTI]<=`SLT;
        op_tb[`OP_SLTIU]<=`SLTU;
        op_tb[`OP_SW]<=`ADD;
        op_tb[`OP_XORI]<=`XOR;
        
        
        func_tb[`FUNC_ADD]<=`ADD;
        func_tb[`FUNC_ADDU]<=`ADDU;
        func_tb[`FUNC_AND]<=`AND;
        func_tb[`FUNC_JALR]<=`OR;
        func_tb[`FUNC_JR]<=`OR;
        func_tb[`FUNC_NOR]<=`NOR;
        func_tb[`FUNC_OR]<=`OR;
        func_tb[`FUNC_SLL]<=`SLL;
        func_tb[`FUNC_SLLV]<=`SLL;
        func_tb[`FUNC_SLT]<=`SLT;
        func_tb[`FUNC_SLTU]<=`SLTU;
        func_tb[`FUNC_SRA]<=`SRA;
        func_tb[`FUNC_SRAV]<=`SRA;
        func_tb[`FUNC_SRL]<=`SRL;
        func_tb[`FUNC_SRLV]<=`SRL;
        func_tb[`FUNC_SUB]<=`SUB;
        func_tb[`FUNC_SUBU]<=`SUBU;
        func_tb[`FUNC_XOR]<=`XOR;
        
        
        
    end    
endmodule
