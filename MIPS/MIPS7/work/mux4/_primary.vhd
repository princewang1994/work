library verilog;
use verilog.vl_types.all;
entity mux4 is
    generic(
        WIDTH           : integer := 8
    );
    port(
        I0              : in     vl_logic_vector;
        I1              : in     vl_logic_vector;
        I2              : in     vl_logic_vector;
        I3              : in     vl_logic_vector;
        OSel            : in     vl_logic_vector(1 downto 0);
        \Out\           : out    vl_logic_vector
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of WIDTH : constant is 1;
end mux4;
