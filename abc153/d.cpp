#include<iostream>
using namespace std;

int main() {
    int64_t H, ans = 1;
    cin >> H;

    while (H >= ans) {
        ans *= 2;
    }
    cout << ans - 1 << endl;
}