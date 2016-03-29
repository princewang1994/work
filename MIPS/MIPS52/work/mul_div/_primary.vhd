library verilog;
use verilog.vl_types.all;
entity mul_div is
    port(
        DA              : in     vl_logic_vector(31 downto 0);
        DB              : in     vl_logic_vector(31 downto 0);
        clk             : in     vl_logic;
        op              : in     vl_logic_vector(1 downto 0);
        L32             : out    vl_logic_vector(31 downto 0);
        H32             : out    vl_logic_vector(63 downto 32)
    );
end mul_div;
