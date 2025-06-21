#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {4, 3, 2, 1, 6, 7};
    int sum = 0;
    for(int i = 0; i < v.size(); i++) {
        sum += v[i];
    }

    cout << sum;
    return 0;
}