#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;

const int LIMIT = 100000;
int n, m, x[LIMIT], diff[LIMIT], ans;

int main() {
    cin >> n >> m;
    rep(i, m) cin >> x[i];
    sort(x, x + m);
    rep(i, m-1) diff[i] = x[i+1] - x[i];
    sort(diff, diff + m - 1);
    rep(i, m - n) ans += diff[i];
    cout << ans << endl;
}