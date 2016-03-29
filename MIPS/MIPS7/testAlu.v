
module  testAlu;
    //
    reg  clock ;
    reg [31:0] A;
    reg [31:0] B;
    reg [3:0] ALUop;
    wire [31:0] C;
    wire Zero;
    
    // instantiate the controller module
   alu U_ALU( A,B,ALUop,Zero,C) ;
 
    initial
    begin
        clock= 0 ;
        A=32'h00000008;
        B=32'h00000005;

        #80 ALUop=4'b0000;  
        #80 ALUop=4'b0001;   
        #80 ALUop=4'b0010;
        #80 ALUop=4'b0011;
        #80 ALUop=4'b0100;
        
        #80 $finish ;
    end
    
    always  
        #20 clock = ~clock ;

endmodule
