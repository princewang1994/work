library verilog;
use verilog.vl_types.all;
entity m_fsm is
    port(
        fsm             : in     vl_logic_vector(3 downto 0);
        ALU_INSTR       : in     vl_logic;
        J_INSTR         : in     vl_logic;
        JR_INSTR        : in     vl_logic;
        LD_INSTR        : in     vl_logic;
        ST_INSTR        : in     vl_logic;
        B_INSTR         : in     vl_logic;
        MF_INSTR        : in     vl_logic;
        MT_INSTR        : in     vl_logic;
        MD_INSTR        : in     vl_logic;
        INT_INSTR       : in     vl_logic;
        intr            : in     vl_logic;
        newfsm          : out    vl_logic_vector(3 downto 0)
    );
end m_fsm;
