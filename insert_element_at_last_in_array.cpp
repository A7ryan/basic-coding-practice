#include <bits/stdc++.h>
using namespace std;

int main() {
    int arrSize = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int element = 0;
    
    arr[arrSize] = element;

    for(int i = 0; i <= arrSize; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}