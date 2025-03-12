#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {3, 2, 2, 1 ,4, 5, 6, 7, 8, 8,5, 4, 3, 2, 1,2};
    map<int, int> mpp;
    int t = 0;

    for(int i = 0; i < v.size(); i++) {
        if(mpp.find(v[i]) == mpp.end()) {
            v[t++] = v[i];
            mpp[v[i]] = 1;
        }
    }

    for(int i = 0; i < t; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}