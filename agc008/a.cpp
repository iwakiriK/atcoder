#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int x, y, ans;

int main() {
    cin >> x >> y;
    ans = abs(abs(x) - abs(y));
    if (abs(x) > abs(y)) {
        if (x > 0) {
            if (y <= 0) ans++;
            else ans += 2;
        } else {
            if (y > 0) ans++;
        }
    } else if (abs(x) < abs(y)) {
        if (x >= 0) {
            if (y < 0) ans++;
        } else {
            ans++;
            if (y < 0) ans++;
        }
    } else {
        if (x >= 0 ^ y >= 0) ans++;
    }
    cout << ans << endl;
    return 0;
}