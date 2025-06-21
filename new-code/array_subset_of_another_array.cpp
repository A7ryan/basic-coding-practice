#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {3, 1, 2, 4, 5, 6};
    vector<int> v2 {1, 2, 3, 4, 5};
    unordered_map<int, int> mpp;

    for(auto a : v2) {
        mpp[a]++;
    }

    for(int i = 0; i < v.size(); i++) {
        if(mpp.count(v[i]) == 0) {
            cout << "Array 1 is not a Subset of Array 2" << endl;
            return 0;
        }
    }

    cout << "Array 1 is a Subset of Array 2" << endl;
    return 0;    
}