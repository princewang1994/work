library verilog;
use verilog.vl_types.all;
entity npc is
    port(
        PC              : in     vl_logic_vector(31 downto 2);
        Imm26           : in     vl_logic_vector(25 downto 0);
        NPCop           : in     vl_logic_vector(1 downto 0);
        NPC             : out    vl_logic_vector(31 downto 2);
        PC_4            : out    vl_logic_vector(31 downto 2)
    );
end npc;
