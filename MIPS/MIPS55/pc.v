module pc(NPC,PCWr,clk,Reset,PC);
  
  `include "op.v"
  input [31:2] NPC;
  input clk;
  input Reset;
  input PCWr;
  output reg [31:2] PC;
  
  initial
  begin
    PC <=32'hc00;
  end
  
  always@(posedge clk)
  begin
    if(Reset)
      PC <= 32'hc00;
    else
      if(PCWr)
        PC <= NPC;
  end
  
  
endmodule  
