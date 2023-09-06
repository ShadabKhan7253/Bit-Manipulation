#include <iostream>

using namespace std;

// Step:
// 1. Bit masking: 1<<i
// 2. Operation : AND

// Example:
// n=5 => 0101
// pos=2;
// bitmask = 1<<pos => 0100;
// n & bitmask:

// 0 1 0 1 - n
// 0 1 0 0 - bitmask
// -------
// 0 1 0 0

int getBit(int n,int pos) {
    return ((n & (1<<pos)) != 0);
}

int main() {
    cout<<getBit(5,2);
    return 0;
}