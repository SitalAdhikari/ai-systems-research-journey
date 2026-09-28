# Day 02 - Memory, Cache and Performance

## Topics:
-CPU Cache  
-Cache Hit and Cache Miss  
-Cache Line  
-Temporal Locality  
-Spatial Locality  
-Memory Access Pattern  

## What I implemented?
Created a C++ program to compare sequential array ( N=10 and N=10000000) access with different memory access strides and measured their execution time.

## Summary:
-CPU caches keep frequently or recently accessed data closer to the CPU to reduce the cost of accessing slower main memory.  
-Temporal locality means recently used data is likely to be used again, while spatial locality means nearby data is likely to be accessed soon.  
-The way a program accesses memory can therefore affect its execution performance.  
-This connects memory behavior to AI workloads, where moving weights and activations can become a major performance bottleneck.

## Confusion:
1. Why do we need the Cache memory if the CPU has Registers?
-> Because the registers are in the limited numbers.

2. Which is more faster Cache memory or Registers?
-> Registers because it is inside the CPU. As the distance between the CPU and the memory increases, the hit latency also increases.

3. Is it compulsory to have three cache memory?
-> No

4. Then, Can't we replace RAM by  multiple cache memory?
-> we can but it will become more complex and increases the data accessing time by the CPU. In fact, Cache memory is implemented by using SRAM.(so cache memory is technically the part of the RAM.)
