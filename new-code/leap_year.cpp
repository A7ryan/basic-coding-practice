#include <bits/stdc++.h>
using namespace std;

int main() {
    int year = 2000;
    if((year % 4 == 0) || (year % 100 != 0 && year % 400 == 0)) {
        cout << "The given year is Leap Year!" << endl;
    }
    else {
        cout << "The given year is not a Leap Year!" << endl;
    }
    return 0;
}
