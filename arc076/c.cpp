#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MOD = 1000000007;
int n, m;
ll ans;

int main() {
    cin >> n >> m;
    if (abs(n - m) <= 1) {
        ans = 1;
        for (int i = 1; i <= n; i++) ans = ans * i % MOD;
        for (int i = 1; i <= m; i++) ans = ans * i % MOD;
        if (n == m) ans = ans * 2 % MOD;
    }
    cout << ans << endl;
    return 0;
}