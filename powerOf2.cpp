#include <iostream>

using namespace std;

// If a number N is a power of 2, then the bitwise AND of N and N-1 will be 0. 
// But this will not work if N is 0. So just check these two conditions, if any of these two 
// conditions is true.

bool isPowerOfTwo(int n) {
    return (n & (n-1)) == 0;
}

int main() {
    cout<<boolalpha;
    cout<<isPowerOfTwo(32);
    return 0;
}