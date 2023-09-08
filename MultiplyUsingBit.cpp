#include <iostream>

using namespace std;

// - Multiply by 2 : left shit by 1;

int multiplyby2(int n) {
    return n<<1;
}

int main() {
    int res = multiplyby2(4);
    cout<<res;
    return 0;
}