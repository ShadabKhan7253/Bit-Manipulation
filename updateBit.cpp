#include <iostream>

using namespace std;

// Update Bit depend on 2 condition:
// 1. To update 0 to 1
//     In this case we use setBit function
// 2. To update 1 to 0
//     In this case we use clearBit function 
// Both the method/function we have studied previosly

int updateBit(int n,int pos,int operation) {
    int num = 0;
    if(operation == 1) {
        num = n | (1<<pos);
    } else {
        int bitmask = 1<<pos;
        int notBitMask = ~(bitmask);
        num = n & notBitMask;
    }
    return num;
}

int main() {
    cout<<updateBit(11,2,1)<<endl;
    cout<<updateBit(5,2,0);
    return 0;
}