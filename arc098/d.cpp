#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0;
    ll sum = 0, xo = 0, ans = 0;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        xo ^= a[r];
        for (; sum != xo; l++) {
            sum -= a[l];
            xo ^= a[l];
        }
        ans += r - l + 1;
    }
    cout << ans << endl;

    return 0;
}