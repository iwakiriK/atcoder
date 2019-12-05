#include<iostream>
using namespace std;

const int MOD = 1e9 + 7, MAX = 2000001;

int comb(int n, int k){
    // Calculate factorial and inverse element
    int64_t fac[MAX], finv[MAX], inv[MAX];
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD% i ] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
    int X, Y, ans = 0;
    cin >> X >> Y;
    int n = (2 * Y - X) / 3;
    int m = (2 * X - Y) / 3;
    if ((X + Y) % 3 == 0 && n >= 0 && m >= 0) {
        ans = comb(n + m, n);
    }
    cout << ans << endl;
}