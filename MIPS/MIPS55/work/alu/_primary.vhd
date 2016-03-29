library verilog;
use verilog.vl_types.all;
entity alu is
    port(
        A               : in     vl_logic_vector(31 downto 0);
        B               : in     vl_logic_vector(31 downto 0);
        ALUop           : in     vl_logic_vector(3 downto 0);
        Zero            : out    vl_logic;
        GEZ             : out    vl_logic;
        C               : out    vl_logic_vector(31 downto 0)
    );
end alu;
