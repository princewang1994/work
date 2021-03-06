module dm(addr,be,din,we,ldsign,clk,dout);
  
  input [11:2] addr;//addr bus
  input [3:0] be; //byte enable
  input [31:0] din; //32 input data
  input we;         //memory write enable
  input clk;    //clock
  input ldsign; //load sign
  
  
  output reg [31:0] dout;
  
  reg [31:0] dm[1023:0];
   
  //store 
  always@(posedge clk)
  begin
    if(we)
      case(be)
        4'b1111:dm[addr][31:0]<=din[31:0];
        4'b0011:dm[addr][15:0]<=din[15:0];
        4'b1100:dm[addr][31:16]<=din[15:0];
        4'b0001:dm[addr][7:0]<=din[7:0];
        4'b0010:dm[addr][15:8]<=din[7:0];
        4'b0100:dm[addr][23:16]<=din[7:0];
        4'b1000:dm[addr][31:24]<=din[7:0];
      endcase
  end
  
  always@(*)
  begin
      if (ldsign)
        case(be)    // sign

          4'b1111:dout<=dm[addr][31:0]; //LW
          4'b0011:dout<={{16{dm[addr][15]}},dm[addr][15:0]};
          4'b1100:dout<={{16{dm[addr][31]}},dm[addr][31:16]};
          4'b0001:dout<={{24{dm[addr][7]}},dm[addr][7:0]};
          4'b0010:dout<={{24{dm[addr][15]}},dm[addr][15:8]};
          4'b0100:dout<={{24{dm[addr][23]}},dm[addr][23:16]};
          4'b1000:dout<={{24{dm[addr][31]}},dm[addr][31:24]};
          
        endcase 
      else          //unsign
        case(be)
          4'b1111:dout<=dm[addr][31:0]; //LW
          4'b0011:dout<={16'b0,dm[addr][15:0]}; 
          4'b1100:dout<={16'b0,dm[addr][31:16]};
          4'b0001:dout<={24'b0,dm[addr][7:0]};
          4'b0010:dout<={24'b0,dm[addr][15:8]};
          4'b0100:dout<={24'b0,dm[addr][23:16]};
          4'b1000:dout<={24'b0,dm[addr][31:24]};
        endcase
  end
  
  integer i;
  initial
  begin
        for(i=0;i<1024;i=i+1)
            dm[i]=0;
  end
  
  
endmodule
