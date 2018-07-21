#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main() {
    int n, m, num, ans = 0;
    cin >> n >> m;
    vector<pair<int, int> >V(m);
    rep(i, m) {
        cin >> V[i].second >> V[i].first;
    }
    sort(V.begin(), V.end());
    int b = -1;
    rep(i, m) {
        if (b <= V[i].second) {
            ans++;
            b = V[i].first;
        }
    }
    cout << ans << endl;

    return 0;
}