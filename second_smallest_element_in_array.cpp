#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {2, 6, 7, 10, 40, 112};

    int guessSecondSmallest = v[0];
    int guessSecondLargest = v[0];
    for(int i = 1; i < v.size(); i++) {
        if(v[i] > guessSecondLargest) {
            guessSecondLargest = v[i];
        }
        if(v[i] < guessSecondSmallest) {
            guessSecondSmallest = v[i];
        }
    }

    int secondSmallest = INT_MIN;
    for(int i = 0; i < v.size(); i++) {
        if((v[i] > guessSecondSmallest && v[i] < guessSecondLargest) && (v[i] > secondSmallest)) {
            secondSmallest = v[i];
        }
    }

    cout << secondSmallest;
    return 0;
}