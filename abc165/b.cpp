#include<iostream>
using namespace std;

int main() {
    int64_t X, cur = 100, ans = 0;
    cin >> X;
    for (; cur < X; ans++) {
        cur *= 1.01;
    }
    cout << ans << endl;
}