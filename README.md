# PicoBlaze Debouncing LED Controller (FPGA - VHDL + PSM)

This FPGA project implements a digital switch debouncing circuit in VHDL and uses a PicoBlaze soft processor to toggle an LED with a programmable delay. It includes simulation files, waveform configuration, and assembly firmware for the processor.

---

## 🧠 Features

- Switch debouncing implemented in VHDL
- PicoBlaze soft processor (KCPSM) controls LED toggling
- LED blinking delay based on a cubic loop: `N³ × 40ns`
- Assembly firmware written in `.psm` (KCPSM3 syntax)
- Testbench and waveform configuration included for simulation

---

## 📁 Key Files

| File | Description |
|------|-------------|
| [`main.vhd`](./Lab_7_Debouncing/Lab_7_Debouncing.srcs/sources_1/new/main.vhd) | Top-level entity wrapping PicoBlaze and debounce logic |
| [`Reg_sw.vhd`](./Lab_7_Debouncing/Lab_7_Debouncing.srcs/sources_1/new/Reg_sw.vhd) | Switch input synchronizer & debouncer |
| [`main_tb.vhd`](./Lab_7_Debouncing/Lab_7_Debouncing.srcs/sim_1/new/main_tb.vhd) | VHDL testbench for simulation |
| [`main_tb_behav.wcfg`](./Lab_7_Debouncing/main_tb_behav.wcfg) | Waveform configuration for Vivado |
| [`Lab7_vhdl_pico.psm`](./Lab7_vhdl_pico.psm) | PicoBlaze assembly firmware controlling LED blinking |

---

## 🛠 Requirements

- **Xilinx Vivado 2020.2+**
- **KCPSM3 Assembler** (for `.psm` firmware)
- **Basys 3 FPGA board** (or compatible)
- UART terminal (optional)

---

## 🚀 How to Use

### 🧪 Simulate

1. Open Vivado and launch the project (`Lab_7_Debouncing.xpr`)
2. Run simulation with `main_tb.vhd`
3. Load waveform configuration: `main_tb_behav.wcfg`
4. Observe switch behavior and debouncing waveform

### 💻 Deploy to Hardware

1. Assemble the `Lab7_vhdl_pico.psm` using KCPSM3
2. Load the compiled firmware into BRAM or memory block
3. Generate and program bitstream to the Basys 3 board
4. Press switch to toggle LED with debounced logic

---

## 📄 License

This project is released for educational and learning purposes. You are welcome to reuse or adapt it with attribution.

---

🔁 Built using VHDL and PicoBlaze for switch debouncing and LED control on FPGA.
