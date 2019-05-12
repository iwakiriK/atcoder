#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

ll N, ans;

int main() {
    cin >> N;
    // findAllDivisors
    vector<ll> divisors;
    for (ll i = 1; i * i <= N; i++) {
        if (N % i) continue;
        divisors.push_back(i);
        if (i * i != N) divisors.push_back(N / i);
    }

    // solve
    rep(i, divisors.size()) {
        ll now = divisors[i] - 1;
        if (now == 0) continue;
        if (N / now == N % now) ans += now;
    }

    cout << ans << endl;
}