#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, W[100];
    cin >> N;
    rep(i, N) cin >> W[i];
    int S1 = 0, S2 = accumulate(W, W + N, 0), ans = 1e9;
    rep(i, N-1) {
        S1 += W[i];
        S2 -= W[i];
        ans = min(ans, abs(S1 - S2));
    }
    cout << ans << endl;
}