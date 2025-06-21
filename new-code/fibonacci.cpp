#include <bits/stdc++.h>
using namespace std;

int findFibonacci(int n) {
    if(n <= 1) {
        return n;
    }

    int fibNum = findFibonacci(n-1) + findFibonacci(n-2);
    return fibNum;
}

int main() {
    int fibNum = 7;

    for(int i = 0; i <= fibNum; i++) {
        cout << findFibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}