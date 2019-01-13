#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

const int MOD = 1e9+7, LIM = 1000;
int n, m, a[LIM], b[LIM], cnt;
ll ans = 1;

int main() {
    cin >> n >> m;
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);

    int ai = n - 1, bi = m - 1;
    for (int i = n * m; i > 0; i--, cnt++) {
        if (a[ai] == i && b[bi] == i) {
            ai--; bi--;
        } else if (a[ai] == i) {
            ai--;
            ans = ans * (m - bi - 1) % MOD;
        } else if (b[bi] == i) {
            bi--;
            ans = ans * (n - ai - 1) % MOD;
        } else {
            ans = ans * ((m - bi - 1) * (n - ai - 1) - cnt) % MOD;
        }
    }
    cout << ans << endl;

    return 0;
}