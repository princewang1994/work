library verilog;
use verilog.vl_types.all;
entity pc is
    port(
        NPC             : in     vl_logic_vector(31 downto 2);
        PCWr            : in     vl_logic;
        clk             : in     vl_logic;
        Reset           : in     vl_logic;
        PC              : out    vl_logic_vector(31 downto 2)
    );
end pc;
