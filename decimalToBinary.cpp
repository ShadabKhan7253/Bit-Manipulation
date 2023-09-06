#include <iostream>

using namespace std;

// string decimalToBinary(int n) {
//     string res;
//     while(n > 0) {
//         int rem = n % 2;
//         res = to_string(rem) + res;
//         n = n / 2; 
//     }
//     return res;
// }

// Using bitwise right shift

string decimalToBinary(int n) {
    string res;
    while(n > 0) {
        if(n & 1)
            res = "1" + res;
        else
            res = "0" + res;
        n >>= 1;
    }
    return res;
}

int main() {
    string res = decimalToBinary(10);
    cout<<res;
    return 0;
}