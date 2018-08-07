#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) REP(i,0,n)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int x[n], y[n];
    int sx[n], sy[n];
    rep(i, n) {
        cin >> x[i] >> y[i];
        sx[i] = x[i], sy[i] = y[i];
    }
    sort(sx, sx + n);
    sort(sy, sy + n);
    
    ll ans = 1LL * (sx[n-1] - sx[0]) * (sy[n-1] - sy[0]);
    rep(x1, n) {
        REP(x2, x1+1, n) {
            rep(y1, n) {
                REP(y2, y1+1, n) {
                    int num = 0;
                    int lx = sx[x1], rx = sx[x2];
                    int dy = sy[y1], uy = sy[y2];

                    rep(i, n) {
                        if (lx <= x[i] && x[i] <= rx && dy <= y[i] && y[i] <= uy) {
                            num++;
                        }
                    }
                    if (num >= k) {
                        ans = min(ans, 1LL * (rx - lx) * (uy - dy));
                    }
                }
            }
        }

    }
    cout << ans << endl;
    return 0;
}