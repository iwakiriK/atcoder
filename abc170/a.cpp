#include<iostream>
using namespace std;

int main() {
    for (int x, i = 1; i <= 5; i++) {
        cin >> x;
        if (x != i) cout << i << endl;
    }
}