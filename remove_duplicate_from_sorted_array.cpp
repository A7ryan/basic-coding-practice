#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {3, 2, 2, 1 ,4, 5, 6, 7, 8, 8,5, 4, 3, 2, 1,2};
    sort(v.begin(), v.end());
    set<int> s;

    for(auto a : v) {
        s.insert(a);
    }

    int t = 0;
    for(auto a : s) {
        v[t++] = a;
    }

    for(int i = 0; i < s.size(); i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}