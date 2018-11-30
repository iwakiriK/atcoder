#include<bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,(n))
using namespace std;

int N, M, X, Y, x = -1e9, y = 1e9, a;

int main() {
    cin >> N >> M >> X >> Y;
    rep(i, N) cin >> a, x = max(a, x);
    rep(i, M) cin >> a, y = min(a, y);
    string ans = "War";
    REP(Z, x+1, y+1) {
        if (X < Z && Z <= Y) ans = "No War";
    }
    cout << ans << endl;
    return 0;
}