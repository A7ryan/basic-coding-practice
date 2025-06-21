#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 777;
    
    int t = num;
    int mul = 0;
    while(t > 0) {
        int a = t % 10;
        mul = mul * 10 + a;
        t /= 10;
    }

    (mul == num) ? cout << "Palindrome Number" : cout << "Not a Palindrone Number" << endl;
    return 0;
}