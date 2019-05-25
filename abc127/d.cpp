#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

int main() {
    // input
    int n, m, a, b, c;
    cin >> n >> m;
    vector<pair<ll, int> > cb;
    rep(i, n) {
        cin >> a;
        cb.push_back(make_pair(a, 1));
    }
    rep(i, m) {
        cin >> b >> c;
        cb.push_back(make_pair(c, b));
    }    
    sort(cb.begin(), cb.end(), greater<pair<ll, int> >());

    // solve
    ll ans = 0;
    rep(i, cb.size()) {
        if (n > cb[i].second) {
            ans += cb[i].first * cb[i].second;
            n -= cb[i].second;
        } else {
            ans += cb[i].first * n;
            break;
        }
    }
    cout << ans << endl;
}