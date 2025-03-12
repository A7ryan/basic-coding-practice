#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 0, 5};
    int smallest_element_guess = v[0];
    for(int i = 1; i < v.size(); i++) {
        if(v[i] < smallest_element_guess) {
            smallest_element_guess = v[i];
        }
    }

    cout << "Smallest Element: " << smallest_element_guess;
}