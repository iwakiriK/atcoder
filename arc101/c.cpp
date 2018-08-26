#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;

const int MAX_N = 100000;
int n, k, x[MAX_N], ans = INT_MAX;

int main() {
    cin >> n >> k;
    rep(i, n) cin >> x[i];
    rep(i, n - k + 1) {
        int l = x[i], r = x[k+i-1];
        int num = r - l + min(abs(l), abs(r));
        ans = min(ans, num);
    }
    cout << ans << endl;
    return 0;
}