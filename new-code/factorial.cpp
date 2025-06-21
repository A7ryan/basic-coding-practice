#include <bits/stdc++.h>
using namespace std;

int findFactorial(int n) {
    if(n <= 1) {
        return n;
    }

    int factNum = n * findFactorial(n-1);
    return factNum;
}

int main() {
    int factNum = 5;

    cout << findFactorial(factNum);
    cout << endl;
    return 0;
}