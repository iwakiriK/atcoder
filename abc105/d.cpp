#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], sum[n+1];
    sum[0] = 0;
    rep(i, n) {
        cin >> a[i];
        sum[i+1] = (sum[i] + a[i]) % m;
    }
    ll ans = 0;
    map<int, int>mp;
    rep(i, n+1) {
        ans += mp[sum[i]];
        mp[sum[i]]++;
    }
    cout << ans << endl;
    return 0;
}