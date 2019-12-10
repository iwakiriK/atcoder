#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, A[20], x[20][20], y[20][20], ans;

int main() {
    cin >> N;
    rep(i, N) {
        cin >> A[i];
        rep(j, A[i]) {
            cin >> x[i][j] >> y[i][j];
            x[i][j]--;
        }
    }
    for (int bit = 0; bit < (1 << N); bit++) {
        bool ok = true;
        int cnt = 0;
        rep(i, N) {
            if (bit & (1 << i)) {
                cnt++;
                rep(j, A[i]) {
                    if (((bit >> x[i][j]) & 1) ^ y[i][j]) ok = false;
                }
            }
        }
        if (ok) ans = max(ans, cnt);
    }
    cout << ans << endl;
    
}