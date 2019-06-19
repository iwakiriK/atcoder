#include<iostream>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,(n))
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n][n];
    bool isNecessary[n][n];
    rep(i, n) rep(j, n) {
        cin >> A[i][j];
        isNecessary[i][j] = true;
    }
    rep(k, n) rep(i, n) rep(j, n) {
        if (A[i][j] > A[i][k] + A[k][j]) {
            printf("-1\n");
            return 0;
        }
        if (A[i][j] == A[i][k] + A[k][j] && A[i][k] && A[k][j]) {
            isNecessary[i][j] = false;
        }
    }
    int64_t ans = 0;
    rep(i, n) REP(j, i+1, n) {
        if (isNecessary[i][j]) ans += A[i][j];
    }
    cout << ans << endl;
}