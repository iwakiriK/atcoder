#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int cntDigits(ll x) {
    return log10(x) + 1;
}

int main() {
    ll n, ans = 1e9;
    cin >> n;
    
    for (ll a = 1; a * a <= n; a++) {
        if (n % a != 0) continue;
        ll b = n / a;
        ll cur = max(cntDigits(a), cntDigits(b));
        ans = min(ans, cur);
    }
    cout << ans << endl;
}