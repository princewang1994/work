module npc(PC,Imm26,NPCop,ALUout,NPC);
  `include "op.v"
  input [31:2] PC;
  input [25:0] Imm26;
  input [1:0] NPCop;
  input [31:0] ALUout;
  output  [31:2] NPC;
  
  reg [31:2] NPC;
  
  always @(*)
  case(NPCop)
    
    `PC_4:NPC <= PC+1;
    
    `PC_BRANCH:NPC <= PC+{{14{Imm26[15]}},Imm26[15:0]};
    
    `PC_JAL:NPC <= {PC[31:28],Imm26[25:0]};
    
    `PC_ALUOUT: NPC <= ALUout[31:2]; 
    
  endcase
endmodule
