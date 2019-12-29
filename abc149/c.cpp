#include<iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    for (int i = 2; i < X; i++) {
        if (X % i == 0) {
            X++;
            i = 1;
        }
    }
    cout << X << endl;
}