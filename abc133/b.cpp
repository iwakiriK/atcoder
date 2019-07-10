#include<bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,(n))
using namespace std;

int main() {
    int N, D, ans = 0;
    cin >> N >> D;
    int X[N][D];
    rep(i, N) rep(j, D) {
        cin >> X[i][j];
    }
    
    rep(i, N) {
        REP(j, i + 1, N) {
            int norm = 0;
            rep(k, D) {
                norm += pow(X[i][k] - X[j][k], 2);
            }
            REP(k, 1, norm + 1) {
                if (k * k == norm) ans++;
            }
        }
    }
    cout << ans << endl;
}