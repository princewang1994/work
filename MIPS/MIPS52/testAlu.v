
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
        A=32'h00000001;
        B=32'hf0000005;

        #80 ALUop=4'b0000;  
        #80 ALUop=4'b0001;   
        #80 ALUop=4'b0010;
        #80 ALUop=4'b0011;
        #80 ALUop=4'b0100;
        #80 ALUop=4'b0101;
        #80 ALUop=4'b0110;
        #80 ALUop=4'b0111;
        
        #80 $finish ;
    end
    
    always  
        #20 clock = ~clock ;

endmodule
