# test-so

```
nm Eurotop_r2p_q_Final.so | grep "T " | awk '{print $3}' | c++filt
g++ -std=c++11 main.cpp -o app -L Eurotop_r2p_q_Final.so -ldl
```
