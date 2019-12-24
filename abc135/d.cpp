#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MOD = 1e9 + 7, M = 13;

int main() {
    string S;
    cin >> S;

    int n = S.size();
    long dp[n+1][M] = {};
    dp[0][0] = 1;
    rep(i, n) {
        int c = S[i] - '0';
        if (S[i] == '?') c = -1;
        rep(j, 10) {
            if (c != -1 && c != j) continue;
            rep(k, M) {
                dp[i + 1][(k * 10 + j) % M] += dp[i][k];
                dp[i + 1][(k * 10 + j) % M] %= MOD;
            }
        }
    }
    cout << dp[n][5] << endl;
}