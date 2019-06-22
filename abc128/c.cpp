#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, M, k, p[10], a, ans = 0;
    cin >> N >> M;
    vector<int> s[M];
    rep(i, M) {
        cin >> k;
        rep(j, k) {
            cin >> a;
            s[i].push_back(a-1);
        }
    }
    rep(i, M) cin >> p[i];

    rep(i, (1 << N)) {
        bool ok = true;
        rep(j, M) {
            int cnt = 0;
            for (int id : s[j]) {
                if (i & (1 << id)) {
                    cnt++;
                }
            }
            if (cnt % 2 != p[j]) ok = false;
        }
        if (ok) ans++;
    }
    cout << ans << endl;
}