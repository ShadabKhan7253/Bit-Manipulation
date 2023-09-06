#include <iostream>

using namespace std;

// Step:
// 1. Bit masking: 1<<i
// 2. Operation : OR

int setBit(int n,int pos) {
    return ((n | (1<<pos)) != 0);
}

int main() {
    cout<<setBit(5,2);
    return 0;
}