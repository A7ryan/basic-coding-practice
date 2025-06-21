#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 14, 16, 116, 12};
    
    // Brute Force
    // for(int i = 0; i < v.size(); i++) {
    //     for(int j = 0; j < v.size() - 1; j++) {
    //         if(v[j] > v[j+1]) {
    //             swap(v[j], v[j+1]);
    //         }
    //     }
    // }

    // 2 Linear Loop
    int maxElement = v[0];
    int minElement = v[0];
    for(int i = 1; i < v.size(); i++) {
        if(v[i] > maxElement) {
            maxElement = v[i];
        }
        if(v[i] < minElement) {
            minElement = v[i];
        }
    }

    int guessSecondMaxElement = 0;
    for(int i = 0; i < v.size(); i++) {
        if( (v[i] > minElement && v[i] < maxElement) && (v[i] > guessSecondMaxElement && v[i] < maxElement)) {
            guessSecondMaxElement = v[i];
        }
    }

    cout << guessSecondMaxElement;
    return 0;
}