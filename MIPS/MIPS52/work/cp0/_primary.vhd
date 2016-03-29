library verilog;
use verilog.vl_types.all;
entity cp0 is
    port(
        A1              : in     vl_logic_vector(4 downto 0);
        A2              : in     vl_logic_vector(4 downto 0);
        A3              : in     vl_logic_vector(4 downto 0);
        WD1             : in     vl_logic_vector(31 downto 0);
        WD2             : in     vl_logic_vector(31 downto 0);
        CP0Wr           : in     vl_logic_vector(1 downto 0);
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        RD              : out    vl_logic_vector(31 downto 0)
    );
end cp0;
