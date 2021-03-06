
module  testIm;
    //
    reg  clock ;
    reg [31:2] pc;
    
  
    reg we;
    wire [31:0] IR;
    
    // instantiate the controller module
   im U_IM( pc,IR) ;
 
    initial
    begin
        clock=0;
        pc=0;       
        
        
        #3600 $finish ;
    end
    
    always  
        #40 clock = ~clock ;        
    
    always@(posedge clock)
    begin
        pc<=pc+1;
    end        
endmodule

