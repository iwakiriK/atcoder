#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

ll k, a, b, ans;

int main() {
    cin >> k >> a >> b;
    k++;
    if (k < a + 2 || a + 2 >= b) {
        ans = k;
    } else {
        // first
        k -= a + 2;
        ll diff = b - a;
        ans = b;
        // second ~
        ll multi = k / 2;
        ans += diff * multi;
        if (k % 2 == 1) ans++;
    }
    cout << ans << endl;
}