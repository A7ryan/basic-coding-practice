#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {1, 2, 3, 4, 5, 6};
    int front = 0;
    int rear = v.size()-1;

    while(front<=rear) {
        swap(v[front], v[rear]);
        front++;
        rear--;
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    return 0;
}