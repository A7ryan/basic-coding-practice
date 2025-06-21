#include <bits/stdc++.h>
using namespace std;

int main() {
    int arrSize = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int element = 0;
    int temp = arr[arrSize-1];

    for(int i = arrSize-1; i >= 0; i--) {
        arr[i+1] = arr[i];
    }

    arr[0] = element;
    // arr[arrSize] = temp;

    for(int i = 0; i <= arrSize; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}