#include <iostream>

using namespace std;

int numOfOnes(int n) {
    int count = 0;
    while (n > 0) {
        if(n & 1) 
            count++;
        n = n >> 1;
    }
    return count;
}

int main() {
    // cout<<__builtin_popcount(5); 
    cout<<numOfOnes(11);
    return 0;
}