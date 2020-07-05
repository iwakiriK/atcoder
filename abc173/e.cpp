#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, K;
    cin >> N >> K;
    int64_t A[N], ans = 1;
    rep(i, N) cin >> A[i];
    sort(A, A + N);

    int l = 0, r = N - 1, sign = 1;
    if (K % 2) {
        ans = A[r];
        r--;
        K--;
        if (ans < 0) sign = -1;
    }

    while (K) {
        int64_t x = A[l] * A[l+1];
        int64_t y = A[r] * A[r-1];
        if (x * sign > y * sign) {
            ans *= x % MOD;
            l += 2;
        } else {
            ans *= y % MOD;
            r -= 2;
        }
        ans %= MOD;
        K -= 2;
    }
    cout << (ans + MOD) % MOD << endl;
}