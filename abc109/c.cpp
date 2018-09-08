#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    int N, X, x[100000];
    cin >> N >> X;
    rep(i, N) {
        cin >> x[i];
        x[i] = abs(x[i] - X);
    }
    if (N > 1) {
        int ans = __gcd(x[0], x[1]);
        REP(i, 2, N) {
            ans = __gcd(ans, x[i]);
        }
        cout << ans << endl;
    } else {
        cout << x[0] << endl;
    }
    return 0;
}