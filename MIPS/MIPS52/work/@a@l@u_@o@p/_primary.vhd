library verilog;
use verilog.vl_types.all;
entity ALU_OP is
    port(
        op              : in     vl_logic_vector(31 downto 26);
        func            : in     vl_logic_vector(5 downto 0);
        alu_op          : out    vl_logic_vector(3 downto 0)
    );
end ALU_OP;
