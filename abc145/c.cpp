#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, x[8], y[8], p[8];
    cin >> N;
    rep(i, N) {
        cin >> x[i] >> y[i];
        p[i] = i;
    }
    
    double ans = 0;
    do {
        rep(i, N-1) {
            double dx = x[p[i]] - x[p[i+1]];
            double dy = y[p[i]] - y[p[i+1]];
            ans += hypot(dx, dy);
        }
    } while (next_permutation(p, p + N));

    rep(i, N) ans /= i + 1;
    printf("%.9f\n", ans);
}