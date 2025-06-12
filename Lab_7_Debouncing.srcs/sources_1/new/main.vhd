library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity main is
Port (    clk100 : in std_logic;
          sw : in std_logic_vector (3 downto 0);
		  rst			: in std_logic;
		  leds : out std_logic_vector(7 downto 0));
	
end main;

architecture Behavioral of main is

component Reg_new is 
generic(n: positive := 2);
port (clk: in std_logic;
		en: in std_logic;
		d: in std_logic_vector (n-1 downto 0);
		q: out std_logic_vector (n-1 downto 0));
end component Reg_new;

component Reg_sw is 
generic(n: positive := 2);
port (clk: in std_logic;
		en: in std_logic;
		d: in std_logic_vector (n-1 downto 0);
		q: out std_logic_vector (n-1 downto 0));
end component Reg_sw;


component kcpsm6 is
 generic(                 hwbuild : std_logic_vector(7 downto 0) := X"00";
                 interrupt_vector : std_logic_vector(11 downto 0) := X"3FF";
          scratch_pad_memory_size : integer := 64);
 port (                   address : out std_logic_vector(11 downto 0);
                      instruction : in std_logic_vector(17 downto 0);
                      bram_enable : out std_logic;
                          in_port : in std_logic_vector(7 downto 0);
                         out_port : out std_logic_vector(7 downto 0);
                          port_id : out std_logic_vector(7 downto 0);
                     write_strobe : out std_logic;
                   k_write_strobe : out std_logic;
                      read_strobe : out std_logic;
                        interrupt : in std_logic;
                    interrupt_ack : out std_logic;
                            sleep : in std_logic;
                            reset : in std_logic;
                              clk : in std_logic);
end component kcpsm6;

-- the program


component Lab7_vhdl_pico is 
 Port (      address : in std_logic_vector(11 downto 0);
         instruction : out std_logic_vector(17 downto 0);
              enable : in std_logic;
                 clk : in std_logic);
 
 end component Lab7_vhdl_pico;
 
 --signals from the processor
signal address : std_logic_vector(11 downto 0) ;
signal instruction : std_logic_vector (17 downto 0);
signal  port_id : std_logic_vector (7 downto 0);
signal in_port: std_logic_vector (7 downto 0);
signal  out_port :std_logic_vector (7 downto 0);
signal write_strobe : std_logic  ;
signal read_strobe : std_logic  ;
signal interrupt : std_logic  ;
signal interrupt_ack : std_logic  ;
signal bram_enable,k_write_strobe: std_logic;

-- internal signals
signal choose_led,choose_sw: std_logic;

signal temp_sw: std_logic_vector(7 downto 0 );


begin
processor: kcpsm6  port map(
                   address => address,
                     instruction => instruction,
                     bram_enable => bram_enable,
                         in_port => in_port,
                        out_port => out_port,
                         port_id => port_id,
                    write_strobe => write_strobe,
                  k_write_strobe => k_write_strobe,
                     read_strobe => read_strobe,
                       interrupt => '0',
                   interrupt_ack => interrupt_ack,
                           sleep => '0',
                           reset => rst,
                             clk => clk100);
                             
program_rom: Lab7_vhdl_pico Port map (      address => address,
         instruction => instruction,
              enable => bram_enable,                       
                 clk => clk100);
                 
leds_reg: Reg_new generic map(n => 8)  -- 4 bit register
port map (clk => clk100,
         en => choose_led, 
         d => out_port,
		 q => leds);
                 
sw_reg: Reg_sw generic map(n => 8)  -- 4 bit register
port map (clk => clk100,
         en => choose_sw, 
         d => temp_sw,
		 q => in_port);
		 
		 
temp_sw <= "0000" & sw; 		 
interrupt <= '0';  -- no interupt
		 
		 
process(write_strobe) -- we want combinational circuit so place all in SL
begin

if (write_strobe ='1') and (port_id = x"02") then
        choose_led <= '1';
else
        choose_led <= '0';
end if;
end process;

process(read_strobe) -- we want combinational circuit so place all in SL
begin

if (read_strobe ='1') and (port_id = x"01") then
        choose_sw <= '1';
else
        choose_sw <= '0';
end if;
end process;



end Behavioral;
