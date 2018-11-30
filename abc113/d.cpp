#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;

const int mod = 1000000007;
int h, w, k, dp[101][8];

int main() {
    cin >> h >> w >> k;
    dp[0][0] = 1;
    rep(i, h) rep(j, w) {
        rep(k, 1 << w - 1) {
            // Check if two horizontal lines are connecting
            bool ng = false;
            rep(l, w - 2) {
                if (((k >> l) & 1) && ((k >> (l + 1)) & 1)) {
                    ng = true;
                }
            }
            if (ng) continue;
            if (j >= 1 && (k >> (j - 1)) & 1) {
                // The case which goes left
                dp[i+1][j-1] += dp[i][j];
                dp[i+1][j-1] %= mod;
            } else if (j <= w - 2 && (k >> j) & 1) {
                // The case which goes right
                dp[i+1][j+1] += dp[i][j];
                dp[i+1][j+1] %= mod;
            } else {
                // The case which goes straight
                dp[i+1][j] += dp[i][j];
                dp[i+1][j] %= mod;
            }
        }
    }
    cout << dp[h][k-1] << endl;
    return 0;
}