#include <iostream>
using namespace std;

int main(){
    int a=10;
    int b=20;
    int c= a+b;
    cout << c << endl;
    return 0;
}

// g++ -S -O0 simple.cpp -o simple_O0.s
// g++ -S -O2 simple.cpp -o simple_O2.s
// g++ -> use the c++ compiler 
// -S -> stop after generating assembly 
// -O0 -> optimizing level 0
// -O2 -> compiler, try to optimize this program significantly while preserving its behaviour


