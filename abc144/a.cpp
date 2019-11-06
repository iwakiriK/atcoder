#include<iostream>
using namespace std;

int main() {
    int a, b, ans = -1;
    cin >> a >> b;
    if (a <= 9 && b <= 9) {
        ans = a * b;
    }
    cout << ans << endl;
}