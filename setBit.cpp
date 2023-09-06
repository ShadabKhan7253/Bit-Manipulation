#include <iostream>

using namespace std;

// Step:
// 1. Bit masking: 1<<i
// 2. Operation : OR

// Exxample:
// n=5 => 0101
// pos=1;
// bitmask = 1<<pos => 0010;
// n | bitmask:

// 0 1 0 1 - n
// 0 0 1 0 - bitmask
// --------
// 0 1 1 1

int setBit(int n,int pos) {
    int bitmask = 1<<pos;
    int num = n | bitmask;
    cout<<num<<endl;
    return (num != 0);
}

int main() {
    cout<<setBit(5,1);
    return 0;
}