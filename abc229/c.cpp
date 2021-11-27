#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    pair<int, int> P[N];
    rep(i, N) {
        cin >> P[i].first >> P[i].second;
    }

    int64_t ans = 0;
    sort(P, P + N, greater<pair<int,int>>());
    rep(i, N) {
        int64_t num = min(P[i].second, W);
        ans += P[i].first * num;
        W -= num;
    }
    cout << ans << endl;
}