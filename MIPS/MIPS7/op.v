`define BASIC 30'b0000_0000_0000_0000_0011_0000_0000_00

`define OP_ADDU 6'b000000 
`define OP_SUBU 6'b000000
`define FUNC_ADDU 6'b100000 
`define FUNC_SUBU 6'b100011

`define OP_LW  6'b100011
`define OP_SW  6'b101011
`define OP_ORI 6'b001101
`define OP_LUI 6'b001111
`define OP_JAL 6'b000011
`define OP_BEQ 6'b000100

//ext
`define ZE 2'b00
`define SE 2'b01
`define HC 2'b10

//alu
`define ADD 4'b0000
`define SUB 4'b0001
`define AND 4'b0010
`define OR  4'b0011
`define XOR 4'b0100


//npc
  `define PC_4 2'b00
  `define PC_BEQ 2'b01
  `define PC_JAL 2'b10




