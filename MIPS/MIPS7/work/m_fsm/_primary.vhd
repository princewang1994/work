library verilog;
use verilog.vl_types.all;
entity m_fsm is
    port(
        op              : in     vl_logic_vector(5 downto 0);
        func            : in     vl_logic_vector(5 downto 0);
        fsm             : in     vl_logic_vector(3 downto 0);
        newfsm          : out    vl_logic_vector(3 downto 0)
    );
end m_fsm;
