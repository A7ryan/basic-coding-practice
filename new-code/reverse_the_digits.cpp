#include<bits/stdc++.h>
using namespace std;

int main() {
    int num = 124421;
    int sum = 0;
    int temp = num;
    while(temp > 0) {
        int a = temp % 10;
        sum = sum * 10 + a;
        temp /= 10;
    }
    cout << num << endl;
    cout << sum << endl;
    return 0;
}
