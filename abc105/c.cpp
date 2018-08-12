#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ans = "";
    while (n) {
        if (n % 2 != 0) {
            n--;
            ans = "1" + ans;
        } else {
            ans = "0" + ans;
        }
        n /= -2;
    }
    if (ans == "") ans = "0";
    cout << ans << endl;
    return 0;
}