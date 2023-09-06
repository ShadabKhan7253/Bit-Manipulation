#include <iostream>

using namespace std;

// Using bitwise right shift

int binaryToDecimal(int n) {
    int decimalValue = 0;
    int base = 1;
    while(n) {
        int lastDigit = n % 10;
        n /= 10;
        decimalValue += lastDigit * base;
        base *= 2; 
    }
    return decimalValue;
}

int main() {
    int res = binaryToDecimal(1110);
    cout<<res;
    return 0;
}