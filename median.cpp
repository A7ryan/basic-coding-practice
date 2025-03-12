#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {4, 3, 2, 1, 5};
    sort(v.begin(), v.end());
    
    int k = v.size();
    double median = -1.00;

    // Even
    if(k%2 == 0) {
        int t1 = (k/2) -1;
        int t2 = k/2;
        median = (v[t1]+v[t2]) / 2.00;
    }
    // Odd
    else {
        median = v[k/2];
    }

    cout << median;
    return 0;
}