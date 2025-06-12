----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 13.05.2025 09:42:21
-- Design Name: 
-- Module Name: Reg_new - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity Reg_sw is

generic(n: positive := 2);
port (clk: in std_logic;
        en: in std_logic;
		d: in std_logic_vector (n-1 downto 0);
		q: out std_logic_vector (n-1 downto 0));
end Reg_sw;

architecture Behavioral of Reg_sw is
signal tmp1: std_logic_vector (n-1 downto 0);
begin
    process(clk)
    begin
    if rising_edge(clk) then
        
            tmp1 <= d ;

     end if ;
    end process;
    
    process(en,tmp1)
    begin 
    if (en='1') then 
        q <= tmp1;
    else
        q <= (others =>'Z');
    end if ;
    end process;
end Behavioral;
