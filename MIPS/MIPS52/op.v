`define BASIC 30'b0000_0000_0000_0000_0011_0000_0000_00

//alu
`define FUNC_ADD  6'b100000 
`define FUNC_ADDU  6'b100001 
`define FUNC_SUBU 6'b100011
`define FUNC_AND  6'b100100
`define FUNC_DIV  6'b011010
`define FUNC_DIVU 6'b011011
`define FUNC_JALR 6'b001001
`define FUNC_BGEZ 5'b00001
`define FUNC_BGTZ 5'b00000
`define FUNC_BLEZ 5'b00000
`define FUNC_BLTZ 5'b00000
`define FUNC_JR   6'b001000
`define FUNC_MFC0 5'b00000
`define FUNC_MFHI 6'b010000
`define FUNC_MFLO 6'b010010
`define FUNC_MTC0 5'b00100
`define FUNC_MTHI 6'b010001
`define FUNC_MTLO 6'b010011
`define FUNC_MULT 6'b011000
`define FUNC_MULTU 6'b011001
`define FUNC_NOR  6'b100111
`define FUNC_OR   6'b100101
`define FUNC_SLL  6'b000000
`define FUNC_SLLV 6'b000100
`define FUNC_SLT 6'b101010
`define FUNC_SLTU 6'b101011
`define FUNC_SRA 6'b000011
`define FUNC_SRAV 6'b000111
`define FUNC_SRL 6'b000010
`define FUNC_SRLV 6'b000110
`define FUNC_SUB 6'b100010
`define FUNC_SUBU 6'b100011
`define FUNC_XOR 6'b100110




`define OP_ALU 6'b000000
`define OP_ADD 6'b000000
`define OP_ADDU 6'b000000
`define OP_AND 6'b000000
`define OP_NOR 6'b000000
`define OP_OR 6'b000000
`define OP_SUB 6'b000000
`define OP_SUBU 6'b000000
`define OP_XOR 6'b000000
`define OP_SLT 6'b000000
`define OP_SLTU 6'b000000
`define OP_SRAV 6'b000000
`define OP_SRLV 6'b000000
`define OP_SLLV 6'b000000


`define OP_ORI 6'b001101
`define OP_ADDI 6'b001000
`define OP_ANDI 6'b001100
`define OP_XORI 6'b001110
`define OP_LUI 6'b001111
`define OP_ADDIU 6'b001001
`define OP_SLTI 6'b001010
`define OP_SLTIU 6'b001011


`define OP_SLL 6'b000000
`define OP_SRA 6'b000000
`define OP_SRL 6'b000000

`define OP_J 6'b000010
`define OP_JAL 6'b000011

`define OP_JALR 6'b000000
`define OP_JR 6'b000000


`define OP_LB 6'b100000
`define OP_LBU 6'b100100
`define OP_LH 6'b100001
`define OP_LHU 6'b100101
`define OP_LW 6'b100011


`define OP_SB 6'b101000
`define OP_SH 6'b101001
`define OP_SW 6'b101011

`define OP_BEQ 6'b000100
`define OP_BNE 6'b000101
`define OP_BGEZ 6'b000001
`define OP_BGTZ 6'b000111
`define OP_BLEZ 6'b000110
`define OP_BLTZ 6'b000001


`define OP_MFC0 6'b010000
`define OP_MFHI 6'b000000
`define OP_MFLO 6'b000000


`define OP_MTC0 6'b010000
`define OP_MTHI 6'b000000
`define OP_MTLO 6'b000000


`define OP_MULT 6'b000000
`define OP_MULTU 6'b000000
`define OP_DIV 6'b000000
`define OP_DIVU 6'b000000










 


//ext
`define ZE 2'b00
`define SE 2'b01
`define HC 2'b10
`define HZE 2'b11

//alu
`define ADD 4'b0000
`define SUB 4'b0001
`define AND 4'b0010
`define OR  4'b0011
`define XOR 4'b0100
`define SLL 4'b0101
`define SRA 4'b0110
`define SRL 4'b0111
`define SLTU 4'b1000
`define NOR  4'b1001
`define ADDU 4'b1010
`define SUBU 4'b1011
`define SLT  4'b1100

//npc
  `define PC_4 2'b00
  `define PC_BRANCH 2'b01
  `define PC_JAL 2'b10
  `define PC_ALUOUT 2'b11
  
  //mul_div
   
  `define MD_MULT 2'b00
  `define MD_MULTU 2'b01
  `define MD_DIV  2'b10
  `define MD_DIVU 2'b11

//cp0
 `define CP0_HI 5'b11111
 `define CP0_LO 5'b11110



