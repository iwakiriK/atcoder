#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int H, N, A, B, dp[10001];

int main() {
    int H, N, A, B;
    cin >> H >> N;
    
    fill_n(dp + 1, H, 1e9);
    rep(i, N) {
        cin >> A >> B;
        rep(j, H + 1) {
            dp[j] = min(dp[max(j - A, 0)] + B, dp[j]);
        }
    }
    cout << dp[H] << endl;
}