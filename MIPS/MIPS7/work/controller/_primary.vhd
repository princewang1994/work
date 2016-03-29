library verilog;
use verilog.vl_types.all;
entity controller is
    port(
        clk             : in     vl_logic;
        IR              : in     vl_logic_vector(31 downto 0);
        Zero            : in     vl_logic;
        PCWr            : out    vl_logic;
        IRWr            : out    vl_logic;
        RegSel          : out    vl_logic_vector(1 downto 0);
        ExtOp           : out    vl_logic_vector(1 downto 0);
        RFWr            : out    vl_logic;
        WDSel           : out    vl_logic_vector(1 downto 0);
        DMWr            : out    vl_logic;
        ALUop           : out    vl_logic_vector(3 downto 0);
        NPCOp           : out    vl_logic_vector(1 downto 0);
        Bsel            : out    vl_logic;
        Be              : out    vl_logic_vector(3 downto 0)
    );
end controller;
