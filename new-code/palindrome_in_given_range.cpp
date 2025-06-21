#include <bits/stdc++.h>
using namespace std;

int main() {
    int startRange = 10;
    int endRange = 40;
    // Find all Palindrome numbers between 10 and 40 (include both)
    vector<int> v;

    for(int i = 10; i <= 40; i++) {
        int mul = 0;
        int tempNum = i;

        while(tempNum > 0) {
            int a = tempNum % 10;
            mul = mul * 10 + a;
            tempNum /= 10;
        }

        if(mul == i) {
            v.push_back(i);
        }
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}