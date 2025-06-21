#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {1, 2, 3, 2, 1, 2, 3, 2, 1, 2, 3, 4, 5, 6, 5, 4, 3, 5, 6, 7};
    unordered_map<int, int> mpp;

    for(auto a : v) {
        mpp[a]++;
    }

    for(auto a : mpp) {
        if(a.second > 1) {
            cout << a.first << " ";
        }
    }
    
    return 0;
}