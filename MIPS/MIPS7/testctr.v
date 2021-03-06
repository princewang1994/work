module  testCtr;
    //
    reg  clk ;
        
    reg [31:0] IR;
    

  

  
  reg Zero;
  
  wire PCWr,IRWr,RFWr,DMWr,Bsel;
  
  wire [1:0] WDSel;
  
  wire [1:0] RegSel;
  
  wire [1:0] ExtOp;
  
  wire [3:0] ALUop;
  
  wire [1:0] NPCOp;
  
  wire  [3:0] Be;
    
    // instantiate the controller module
   controller U_CTRL( clk,IR,Zero,PCWr,IRWr,RegSel,ExtOp,RFWr,WDSel,DMWr,ALUop,NPCOp,Bsel,Be ) ;
 
    initial
    begin
        
        clk= 0 ;
        
        Zero=1;  
        
        #400 IR=32'h00000021;
        #400 IR=32'h00000023;
        #400 IR=32'h8f000000;
        #400 IR=32'haf000000;
        #400 IR=32'h3f000000;
        #400 IR=32'h37000000;
        #400 IR=32'h10000000;
        #400 IR=32'h0f000000;
                          
        
        #3600 $finish ;
    end
    
    always  
        #40 clk = ~clk ;

endmodule

