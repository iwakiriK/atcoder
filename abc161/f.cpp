#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

set<ll> enumDivisor(ll N) {
    set<ll> res;
    for (ll i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            res.insert({i, N / i});
        }
    }
    return res;
}

int main() {
    ll N, ans = 0;
    cin >> N;
    for (ll k : enumDivisor(N)) {
        if (k == 1) continue;
        ll n = N;
        while (n % k == 0) n /= k;
        if (n % k == 1) ans++;
    }
    cout << ans + enumDivisor(N-1).size() - 1 << endl;
}