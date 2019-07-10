#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MOD = 1e9 + 7;
int N, K;
long ans = 1;
vector<int> graph[100000];

void dfs(int from, int now) {
    // permtation(nPr)
    int n = K - 2;
    int r = graph[now].size() - 1;
    if (from == -1) {
        n = K;
        r += 2;
    }
    rep(i, r) {
        ans *= n - i;
        ans %= MOD;
    }
    for (int to: graph[now]) {
        if (to == from) continue;
        dfs(now, to);
    }
}

int main() {
    cin >> N >> K;
    rep(i, N-1) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(-1, 0);
    cout << ans << endl;
}