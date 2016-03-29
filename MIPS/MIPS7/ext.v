module ext(Imm16,ExtOp,Imm32);
  
  `include "op.v"
  input [15:0] Imm16;
  input [1:0] ExtOp;
  output reg [31:0] Imm32;
  
  always@(*)
  begin
  case(ExtOp)
    
    `ZE:Imm32 <= {16'b0 , Imm16};  //?????
    
    `SE:Imm32 <= {{16{Imm16[15]}},Imm16}; //?????
      
    `HC:Imm32 <= {Imm16,16'b0}; //??0??
    
    endcase
  end
  
endmodule
