#include<bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,(n))
using namespace std;

int n, k, h[100000], ans = 1e9;

int main() {
    cin >> n >> k;
    rep(i, n) cin >> h[i];
    sort(h, h + n);
    REP(i, k - 1, n) {
        ans = min(ans, h[i] - h[i-k+1]);
    }
    cout << ans << endl;
    
    return 0;
}