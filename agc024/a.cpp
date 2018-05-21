#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll a, b, c, k, ans;
    cin >> a >> b >> c >> k;
    if (k % 2 == 0) {
        ans = a - b;
    } else {
        ans = b - a;
    }
    cout << ans << endl;
    return 0;
}