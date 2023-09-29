# basic-cpu
A basic MIPS-like single cycle CPU in VHDL

## Full Diagram

<img src="./images/program_counter.jpg" style="background-color:white;" />

## I Type Instruction

<img src="./images/i_type.jpg" style="background-color:white;" />

## R Type Instruction

<img src="./images/r_type.jpg" style="background-color:white;" />

## SLT Instruction

<img src="./images/slt.jpg" style="background-color:white;" />

## LW Instruction

<img src="./images/lw.jpg" style="background-color:white;" />

## SW Instruction

<img src="./images/sw.jpg" style="background-color:white;" />

## Test Results
| Instruction      | op | r_d | r_s | r_t/immediate | Value (r_d)                        |
| ---------------- | -- | --- | --- | ------------- | ---------------------------------- |
| ADDI R3, R0, 5   | 4  | 3   | 0   | 5             | 5                                  |
| ADDI R4, R0, 2   | 4  | 4   | 0   | 2             | 2                                  |
| SLT R11, R3,R4   | 7  | B   | 3   | 4             | 0                                  |
| SW R3, 0(R0)     | C  | 3   | 0   | 0             | M[0] = 5 </br> Value of R3 = 5     |
| SW R4, 4(R0)     | C  | 4   | 0   | 4             | M[4] = 2 </br> Value of R4 = 4     |
| ADDI R6, R0, 4   | 4  | 6   | 0   | 4             | 4                                  |
| LW R7, 0(R6)     | 8  | 7   | 6   | 0             | Value of R7 = 2 </br> M[4] = 2     |
| LW R8, 0(R0)     | 8  | 8   | 0   | 0             | Value of R8 = 5 </br> M[0] = 5     |
| ADD R9, R7, R8   | 0  | 9   | 7   | 8             | 7                                  |
| SLT R10, R0,R1   | 7  | A   | 0   | 1             | 1                                  |
| SLT R10, R1,R0   | 7  | A   | 1   | 0             | 0                                  |
| OR R5, R10, R9   | 3  | 5   | A   | 9             | 7                                  |
| SUBI R10, R5, 7  | 5  | A   | 5   | 7             | 0                                  |
| SUB R11, R10, R7 | 1  | B   | A   | 7             | \-2                                |
| SW R11, 5(R8)    | C  | B   | 8   | 5             | M[10] = -2 </br> Value of R11 = -2 |

![waveforms](./images/waveform_results.png)
