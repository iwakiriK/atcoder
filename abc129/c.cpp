#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, M, a;
    cin >> N >> M;
    vector<bool> ok(N+1, true);
    rep(i, M) {
        cin >> a;
        ok[a] = false;
    }

    vector<int> dp(N+1);
    dp[0] = 1;
    rep(i, N) {
        for (int j = i+1; j <= min(i+2, N); j++) {
            if (ok[j]) {
                dp[j] += dp[i];
                dp[j] %= MOD;
            }
        }
    }
    cout << dp[N] << endl;
}