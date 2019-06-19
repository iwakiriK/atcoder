#include<iostream>
using namespace std;

int main() {
    int64_t X, Y;
    cin >> X >> Y;
    cout << (abs(X - Y) > 1 ? "Alice" : "Brown") << endl;
}