#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
typedef pair<int,int> P;

int main() {
    int N, K;
    cin >> N >> K;
    int mx = (N - 2) * (N - 1) / 2;
    if (mx < K) {
        puts("-1");
        return 0;
    }

    vector<P> ans;
    rep(i, N-1) ans.emplace_back(i+1, N);
    vector<P> edge;
    rep(i, N-1) rep(j, i) edge.emplace_back(j+1, i+1);
    int add = mx - K;
    rep(i, add) ans.push_back(edge[i]);

    cout << ans.size() << endl;
    for (auto e : ans) {
        cout << e.first << " " << e.second << endl;
    }
}