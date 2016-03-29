module test_mul;
  
  reg clk;
  
  reg [31:0] DA;
  
  reg [31:0] DB;
  
  wire Ready;
  
  reg op;
  
  wire [31:0] L32;
  
  wire [31:0] H32;
  
  
  mul_div mul(DA,DB,clk,op,L32,H32,Ready);
  
  initial
  begin
      clk=0;
      DA=32'hfffffff5;
      DB=13;
      op=0;
      #10000 $finish;
  end
  
  always
      #40 clk=~clk;
  

endmodule
