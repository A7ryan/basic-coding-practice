#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {5, 5, 3, 2, 2, 1, 1, 1};
    unordered_map<int, int> mpp;

    for(int i = 0; i < v.size(); i++) {
        mpp[v[i]]++;
    }

    for(int i = 0; i < mpp.size(); i++) {
        cout << i <<mpp[i] << endl;
    }
    return 0;
}