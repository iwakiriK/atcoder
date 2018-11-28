#include<bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,(n))
typedef long long ll;
using namespace std;

int n, k, idx;
ll a[1001], sum[500500], ans;

int main() {
    cin >> n >> k;
    rep(i, n) cin >> a[i+1]; // 1 origin
    REP(i, 1, n) a[i+1] += a[i]; // cumulative sum
    REP(l, 1, n+1) REP(r, l, n+1) {
        sum[idx++] = a[r] - a[l-1]; // N(N+1)/2
    }
    
    for(int i = 39; i >= 0; --i) {
        ll x = ans | (1L << i);
        int cnt = 0;
        rep(j, idx) if ((sum[j] & x) == x) cnt++;
        if (cnt >= k) ans = x;
    }
    cout << ans << endl;
    return 0;
}