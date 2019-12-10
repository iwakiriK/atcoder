#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int64_t N, A[300000], ans, MOD = 1e9 + 7;

int main() {
    cin >> N;
    rep(i, N) cin >> A[i];
    rep(i, 60) {
        int64_t c0 = 0, c1 = 0, bit = (1L << i);
        rep(j, N) {
            if (A[j] & bit) c1++;
            else c0++;
        }
        ans += (bit % MOD) * (c0 * c1 % MOD);
        ans %= MOD;
    }
    cout << ans << endl;
}