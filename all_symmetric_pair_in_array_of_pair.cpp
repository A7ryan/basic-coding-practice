#include <bits/stdc++.h>
using namespace std;

/*
    REFERENCE:
    Example 1:
        Input: (1,2),(2,1),(3,4),(4,5),(5,4)
        Output: (2,1) (5,4)
        Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.

    Example 2:
        Input: (1,5),(2,3),(4,2),(5,1),(2,4)
        Output: (2,4) (5,1)
        Explanation: Since (1,5) and (2,4) are symmetric pairs and (5,1) and (4,2) are symmetric pairs.
*/


int main() {
    int arrSize = 5; // 2 Dimension
    int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}}; 

    unordered_map<int, int> mpp;

    for(int i = 0; i < arrSize; i++) {
        int firstElement = arr[i][0];
        int secondElement = arr[i][1];

        if(mpp.find(secondElement) != mpp.end() && mpp[secondElement] == firstElement) {
            cout << firstElement << " " << secondElement << endl;
        }
        else {
            mpp[firstElement] = secondElement;
        }
    }

    return 0;
}