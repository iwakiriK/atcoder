#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define chmax(x,y) x=max(x,y)
using namespace std;

int N, T, ans, dp[3001][6000];

int main() {
    cin >> N >> T;
    pair<int, int> p[N];
    rep(i, N) cin >> p[i].first >> p[i].second;
    
    sort(p, p + N);
    rep(i, N) {
        rep(j, T) {
            chmax(dp[i+1][j], dp[i][j]);
            chmax(dp[i+1][j + p[i].first], dp[i][j] + p[i].second);
        }
        chmax(ans, dp[i][T-1] + p[i].second);
    }
    cout << ans << endl;
}