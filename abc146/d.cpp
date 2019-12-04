#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;

int main() {
    int N, a, b, K = 0;
    cin >> N;
    P edge[N-1];
    vector<int> G[N];
    for (int i = 0; i < N - 1; i++) {
        cin >> a >> b;
        a--; b--;
        edge[i] = P(a, b);
        G[a].push_back(b);
        G[b].push_back(a);
    }

    map<P, int> mp;
    int used_color[N] = {};
    bool used[N] = {};
    queue<int> que;
    que.push(0);
    used[0] = true;
    while (!que.empty()) {
        int v = que.front(); que.pop();
        K = max(K, (int)G[v].size());
        int cur = 1;
        for (int u: G[v]) {
            if (used[u]) continue;
            if (cur == used_color[v]) cur++;
            used_color[u] = mp[P(u, v)] = mp[P(v, u)] = cur++;
            used[u] = true;
            que.push(u);
        }
    }

    cout << K << endl;
    for (auto p: edge) {
        cout << mp[p] << endl;
    }
}