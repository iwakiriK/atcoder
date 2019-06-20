#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MOD = 1e9 + 7, LIM = 2001;
int N, M, S[LIM], T[LIM], ans = 1;
int64_t sum[LIM][LIM], dp[LIM][LIM];

int main() {
    cin >> N >> M;
    rep(i, N) cin >> S[i];
    rep(i, M) cin >> T[i];

    rep(i, N) rep(j, M) {
        if (S[i] == T[j]) {
            dp[i+1][j+1] = (sum[i][j] + 1) % MOD;
        }
        sum[i+1][j+1] = (sum[i+1][j] + sum[i][j+1] - sum[i][j] + dp[i+1][j+1] + MOD) % MOD;
        ans += dp[i+1][j+1];
        ans %= MOD;
    }
    cout << ans << endl;
}