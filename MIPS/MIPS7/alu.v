module alu(A,B,ALUop,Zero,C);
  
  `include "op.v"
  
  input [31:0] A;
  input [31:0] B;
  input [3:0] ALUop;

  output Zero;
  output [31:0] C;
  
  
  reg [31:0] ans;
  
  
  assign Zero=((ans==0)?1:0);
  assign C=ans;
  

  always@(*)
  case (ALUop)
      `ADD : ans <= A+B;
      `SUB : ans <= A-B;
      `AND : ans <= A&B;
      `OR  : ans <= A|B;
      `XOR : ans <= A^B;     
  endcase
  
endmodule
