#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int LIM = 100000;
int n, a[LIM], b[LIM], dif[LIM], ans, num, l, r;

int main() {
    cin >> n;
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) dif[i] = a[i] - b[i];

    sort(dif, dif + n);
    r = n - 1;
    while (l <= r) {
        if (dif[l] >= 0) break;
        if (-dif[l] > num) {
            // extra num is insufficient
            if (dif[r] <= 0) {
                // Bi > Ci
                ans = -1;
                break;
            } else {
                // add dif[r] to extra num
                num += dif[r--];
                ans++;
            }
        } else {
            // add extra num to dif[l]
            num += dif[l++];
            ans++;
        }
    }
    cout << ans << endl;
}