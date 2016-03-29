module gpr(A1,A2,A3,WD,RegWr,clk,reset,RD1,RD2);
  
  input [4:0] A1;
  input [4:0] A2;
  input [4:0] A3;
  input [31:0]WD;
  input RegWr;
  input reset;
  input clk;
  output [31:0] RD1;
  output [31:0] RD2;
  
  reg [31:0] RF[31:0];//reg file;
  
  assign RD1=RF[A1];
  assign RD2=RF[A2];
  integer i;
  always@(posedge clk)
  begin
    if(reset)
    begin
          for(i=0;i<=31;i=i+1) 
            RF[i]<=0; 
    end
    else
      if(RegWr)
      begin
        $monitor("r9=%d",RF[9]);
        RF[A3] <= WD; 
      end 
  end
  
  initial
  begin
        for(i=0;i<=31;i=i+1) 
            RF[i]<=0; 
  end
  
  
endmodule
