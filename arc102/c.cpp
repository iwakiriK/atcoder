#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<(b);++i)
typedef long long ll;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    ll ans1 = 0, ans2 = 0;
    rep(i, 1, n+1) {
        if (i % k == 0) ans2++;
        else if (2 * i % k == 0) ans1++;
    }
    ans1 = pow(ans1, 3);
    ans2 = pow(ans2, 3);
    cout << ans1 + ans2 << endl;
    return 0;
}