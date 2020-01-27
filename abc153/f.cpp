#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

int main() {
    int N, D, A;
    cin >> N >> D >> A;
    pair<int, int> p[N];
    rep(i, N) cin >> p[i].first >> p[i].second;
    sort(p, p + N);
    
    ll total = 0, ans = 0;
    queue<pair<ll, ll>> que;
    rep(i, N) {
        ll x = p[i].first;
        ll h = p[i].second;
        while (que.size() && x > que.front().first) {
            total -= que.front().second;
            que.pop();
        }
        h -= total;
        if (h > 0) {
            ll num = (h + A - 1) / A;
            ans += num;
            ll damage = A * num;
            total += damage;
            que.emplace(x + D * 2, damage);
        }
    }
    cout << ans << endl;
}