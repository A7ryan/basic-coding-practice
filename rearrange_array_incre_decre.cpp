#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sort(v.begin(), v.end());
    int midVal = v.size()/2;
    for(int i = 0; i < midVal; i++) {
        cout << v[i] << " ";
    }

    for(int i = v.size()-1; i >= midVal; i--) {
        cout << v[i] << " ";
    }
    return 0;
}