#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int LIM = 1e5 + 1;
int N, u, v, a, b, dist[2][LIM], ans;
vector<int> tree[LIM];

void dfs(int i, int node, int parent = -1, int d = 0) {
    dist[i][node] = d;
    for (int child: tree[node]) {
        if (child == parent) continue;
        dfs(i, child, node, d + 1);
    }
}

int main() {
    cin >> N >> u >> v;
    u--; v--;
    rep(i, N-1) {
        cin >> a >> b;
        a--; b--;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    
    dfs(0, u);
    dfs(1, v);
    rep(i, N) {
        if (dist[0][i] < dist[1][i]) ans = max(ans, dist[1][i] - 1);
    }
    cout << ans << endl;
}