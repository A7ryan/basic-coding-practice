#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {1, 2, 3, 4, 5};
    int k = 2;
    vector<int> v2;
    for(int i = k; i < v.size(); i++) {
        v2.push_back(v[i]);
    }
    for(int i = 0; i < k; i++) {
        v2.push_back(v[i]);
    }

    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    return 0;
}