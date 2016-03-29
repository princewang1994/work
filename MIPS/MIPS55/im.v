module im(addr,dout);
  
  `include "op.v"
  //input clk;
  input [15:2] addr;
  output [31:0] dout;
  reg [31:0] instr[16383:0];
  
  reg [31:0] read[16383:3072];
    
  assign dout=instr[addr];   
    
  integer i;
  initial 
  begin   
      
    //$readmemb("G:/MIPS CPU/imm_instr.txt",instr);
    //  $readmemb("G:/MIPS CPU/r_instr.txt",instr);
    //  $readmemb("G:/MIPS CPU/shift_instr.txt",instr);
    //  $readmemb("G:/MIPS CPU/s_instr.txt",instr);
    //    $readmemb("G:/MIPS CPU/j_instr.txt",read);
    //$readmemb("G:/MIPS CPU/j_instr.txt",read);
    //$readmemb("G:/MIPS CPU/jr_instr.txt",read);
    //$readmemb("G:/MIPS CPU/ld_instr.txt",read);
   // $readmemb("G:/MIPS CPU/b_instr.txt",read);
    //  $readmemb("G:/MIPS CPU/mt_instr.txt",read);
    $readmemb("G:/MIPS CPU/md_instr.txt",read);
    for(i=3072;i<=16383;i=i+1)
        instr[i]<=read[i];     
        
    
  end
  
endmodule