library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity main_tb is
end main_tb;

architecture Behavioral of main_tb is

    -- Signals to connect to the UUT
    signal clk100_tb : std_logic := '0';
    signal rst_tb    : std_logic := '0';
    signal sw_tb     : std_logic_vector(3 downto 0);
    signal leds_tb   : std_logic_vector(7 downto 0);

    -- Component declaration for the UUT
    component main
        Port (
            clk100 : in std_logic;
            sw     : in std_logic_vector(3 downto 0);
            rst    : in std_logic;
            leds   : inout std_logic_vector(7 downto 0)
        );
    end component;

begin

    -- Instantiate the Unit Under Test (UUT)
    uut: main port map (
        clk100 => clk100_tb,
        sw     => sw_tb,
        rst    => rst_tb,
        leds   => leds_tb
    );

    -- Clock generation process: 100MHz (10ns period)
    clk_proc: process
    begin
        while true loop
            clk100_tb <= '0';
            wait for 5 ns;
            clk100_tb <= '1';
            wait for 5 ns;
        end loop;
    end process;

    -- Stimulus process
    stim_proc: process
    begin
        -- Initial reset
        rst_tb <= '1';
        wait for 20 ns;
        rst_tb <= '0';

        -- Apply test values to sw
        for i in  0 to 50 loop 
            sw_tb<= x"1";
            wait for 40 ns;
        end loop ;
        
    end process;

end Behavioral;
