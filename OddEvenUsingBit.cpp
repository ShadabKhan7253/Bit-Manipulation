#include <iostream>

using namespace std;

void OddEven(int n) {
    if((n&1) != 0)
        cout<<n<<" is Odd";
    else 
        cout<<n<<" is Even";
}

int main() {
    OddEven(15);
    return 0;
}