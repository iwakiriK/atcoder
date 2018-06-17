#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    ll x[n], y[n], z[n], num[8][n], ans = 0;
    rep (i, n) {
        cin >> x[i] >> y[i] >> z[i];
        num[0][i] =  x[i] + y[i] + z[i];
        num[1][i] =  x[i] + y[i] - z[i];
        num[2][i] =  x[i] - y[i] + z[i];
        num[3][i] =  x[i] - y[i] - z[i];
        num[4][i] = -x[i] + y[i] + z[i];
        num[5][i] = -x[i] + y[i] - z[i];
        num[6][i] = -x[i] - y[i] + z[i];
        num[7][i] = -x[i] - y[i] - z[i];
    }
    rep(i, 8) {
        ll tmp = 0;
        sort(num[i], num[i] + n);
        rep(j, m) tmp += num[i][n-j-1];
        ans = max(ans, tmp);
    }
    cout << ans << endl;
    
    return 0;
}