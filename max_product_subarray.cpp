#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {1,2,-3,0,-4,-5};
    int assumedLargestProduct = INT_MIN;

    for(int i = 0; i < v.size(); i++) {
        for(int j = i; j < v.size(); j++) {
            int receivedProduct = 1;
            for(int c = i; c <= j; c++) {
                receivedProduct *= v[c];
                assumedLargestProduct = max(assumedLargestProduct, receivedProduct);
            }
        }
    }

    cout << assumedLargestProduct;

    return 0;
}