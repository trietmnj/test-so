# test-so

This repo is a prototype to demonstrate the viability of using the MATLAB export
\*.so files in a docker environment.


```
Demangled function names can be obtained from the *.so files:
nm Eurotop_r2p_q_Final.so | grep "T " | awk '{print $3}' | c++filt

C++ code must be compiled to an executable before running:
g++ -std=c++11 main.cpp -o app -L Eurotop_r2p_q_Final.so -ldl
```
