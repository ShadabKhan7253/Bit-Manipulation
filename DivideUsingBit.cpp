#include <iostream>

using namespace std;

// - Divide by 2 : left shit by 1;
// - Divide by 4 : left shit by 2;
// - Divide by 8 : left shit by 3;
// and so on;

int divideByPowerof2(int n) {
    return n>>1;
}

int main() {
    int res = divideByPowerof2(8);
    cout<<res;
    return 0;
}