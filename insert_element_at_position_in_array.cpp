#include <bits/stdc++.h>
using namespace std;

int main() {
    int arrSize = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int position = 4;
    int newElement = 7;

    // output: 1, 2, 3, 4, 7, 5
    int lastElement = arr[arrSize-1];
    
    for(int i = arrSize-1; i >= position; i--) {
        arr[i+1] = arr[i];
    }

    arr[position] = newElement;

    for(int i = 0; i <= arrSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}