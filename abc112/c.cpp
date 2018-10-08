#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) REP(i,0,n)
using namespace std;

int N, x[100], y[100], h[100], H;

int main() {
    cin >> N;
    rep(i, N) {
        cin >> x[i] >> y[i] >> h[i];
    }
    rep(X, 101) {
        rep(Y, 101) {
            rep(i, N) {
                if (h[i]) H = abs(x[i] - X) + abs(y[i] - Y) + h[i];
            }
            bool isAns = true;
            rep(i, N) {
                int num = max(H - abs(x[i] - X) - abs(y[i] - Y), 0);
                if (num != h[i]) isAns = false;
            }
            if (isAns) printf("%d %d %d\n", X, Y, H);
        }
    }
    return 0;
}