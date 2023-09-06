#include <iostream>

using namespace std;

// Step:
// 1. Bit masking: 1<<i
// 2. Operation : AND with NOT

// Logic:
// when we leftshift the one by the position then only at that position we have 1 rest all bit are zero but 
// we want at that position "0" so we perform bitwaise NOT operator so that it will convert the bit 1 to 0 
// at a perticular position where we want 0 so that after ANDing with that perticular bit we get the 0 no matter
//  what is the original bit at that particular bit.

// Example:
// n=5 => 0101
// pos=2;
// bitmask = 1<<pos => 0100;
// NOT of bitmask => 1011
// n & NOT of bitmask:

// 0 1 0 1 - n
// 1 0 1 1 - bitmask
// -------
// 0 0 0 1

int clearBit(int n,int pos) {
    int bitmask = 1<<pos;
    int notBitMask = ~(bitmask);
    int num = n & notBitMask;
    return num;
}

int main() {
    cout<<clearBit(5,2);
    return 0;
}