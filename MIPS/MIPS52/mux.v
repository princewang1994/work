module mux2 #(parameter WIDTH = 8) (I0,I1,OSel,Out);
    
    input OSel;
    
    input [WIDTH - 1:0] I1;
    
    input [WIDTH - 1:0] I0;
    
    output [WIDTH - 1:0] Out;
    
    assign Out = (OSel)? I1:I0;
    
endmodule



module mux4 #(parameter WIDTH = 8) (I0,I1,I2,I3, OSel,Out);
    
    input [1:0] OSel;
    
    input [WIDTH - 1:0] I0;
    
    input [WIDTH - 1:0] I1;
    
    input [WIDTH - 1:0] I2;
    
    input [WIDTH - 1:0] I3;    
    
    
    output reg [WIDTH - 1:0] Out;
    
    always @(*)
    case(OSel) 
        2'b00: Out<=I0;
        
        2'b01: Out<=I1;
        
        2'b10: Out<=I2;
        
        2'b11: Out<=I3;
    endcase
    
endmodule



module mux8 #(parameter WIDTH = 8) (I0,I1,I2,I3,I4,I5,I6,I7, OSel,Out);
    
    input [2:0] OSel;
    
    input [WIDTH - 1:0] I0;
    
    input [WIDTH - 1:0] I1;
    
    input [WIDTH - 1:0] I2;
    
    input [WIDTH - 1:0] I3;
    
    input [WIDTH - 1:0] I4;
    
    input [WIDTH - 1:0] I5;
    
    input [WIDTH - 1:0] I6;
    
    input [WIDTH - 1:0] I7;
    
    
    
    output reg [WIDTH - 1:0] Out;
    
    always @(*)
    case(OSel)
      
        3'b000: Out<=I0;
        
        3'b001: Out<=I1;
        
        3'b010: Out<=I2;
        
        3'b011: Out<=I3;
        
        3'b100: Out<=I4;
        
        3'b101: Out<=I5;
        
        3'b110: Out<=I6;
        
        3'b111: Out<=I7;
        
    endcase
endmodule
