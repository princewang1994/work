
module  testDm;
    //
    reg  clock ;
    reg [11:2] addr;
    reg [3:0] be ;
    reg [31:0] din;
    reg we;
    wire [31:0] dout;
    
    // instantiate the controller module
   dm_4k U_DM( addr,be,din,we,clock,dout) ;
 
    initial
    begin
        clock= 0 ;
        addr=10'b0000000010;
        be=4'b1111;
        we=1;
        din=32'habcc0010;

        #80 be=4'b0011;  
            din=32'h38c60fff;        
        
        #360 $finish ;
    end
    
    always  
        #40 clock = ~clock ;

endmodule


