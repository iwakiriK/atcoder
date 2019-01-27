#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
typedef pair<int, int> P;

int n;
long ans;

int main() {
    cin >> n;
    vector<P> v(n); // sum, aoki
    rep(i, n) {
        cin >> v[i].first >> v[i].second;
        v[i].first += v[i].second;
    }
    sort(v.begin(), v.end(), greater<P>());
    bool first = true;
    rep(i, n) {
        if (first) {
            ans += v[i].first - v[i].second;
            first = false;
        } else {
            ans -= v[i].second;
            first = true;
        }
    }
    cout << ans << endl;
    return 0;
}