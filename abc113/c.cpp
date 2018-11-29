#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

const int LIM = 100000;
int n, m, p[LIM], y[LIM];
vector<int> yd[LIM+1];

int main() {
    cin >> n >> m;
    rep(i, m) cin >> p[i] >> y[i], yd[p[i]].push_back(y[i]);
    rep(i, n) sort(yd[i+1].begin(), yd[i+1].end());
    rep(i, m) printf("%012lld\n", (ll)p[i] * 1e6 + 
        lower_bound(yd[p[i]].begin(), yd[p[i]].end(), y[i]) - yd[p[i]].begin() + 1);
    return 0;
}