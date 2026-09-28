# Day 03 - CPU Pipeline and Instruction-Level Parallelism

## Topics:
-Instruction Cycle  
-CPU Pipeline  
-IF, ID, EX, MEM, WB    

## What I implemented?
Created a C++ program and generated its assembly using GCC with different optimization levels to observe how C++ code is translated into machine instructions.

## Summary:
-A CPU pipeline divides instruction execution into stages so multiple instructions can be in progress at the same time.  
-Pipelining primarily improves instruction throughput by overlapping execution stages.  
-Instruction dependencies and other hazards can prevent the pipeline from being fully utilized.  
-Compiler optimization can also change the machine instructions generated from the same C++ source code.

## Confusion:
-hazards of the pipeling
- How does the optimization of the source code happens while converting into  the instruction?