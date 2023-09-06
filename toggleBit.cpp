#include <iostream>

using namespace std;

// using set and clear bit method

// int toggleBit(int n,int pos) {

//     bool currentBit = ((n & (1<<pos)) == 0);
//     cout<<currentBit<<endl;
//     int num = 0;
//     if(currentBit) {
//         num = n | (1<<pos);
//     } else {
//         int bitmask = 1<<pos;
//         int notBitMask = ~(bitmask);
//         num = n & notBitMask;
//     }
//     return num;
// }


// using  XOR 

int toggleBit(int n,int pos) {
    int num = 0;
    int bitmask = 1<<pos;
    num = n ^ bitmask;
    return num;
}

int main() {
    cout<<toggleBit(5,2)<<endl;
    cout<<toggleBit(11,2);
    return 0;
}