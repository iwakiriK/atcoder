#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
typedef pair<int,int> P;

const int INF = -1;

int main() {
    int N, M, S, T;
    cin >> N >> M;
    vector<int> graph[N];
    rep(i, M) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        graph[u].push_back(v);
    }
    cin >> S >> T;
    S--; T--;

    int dist[N][3];
    rep(i, N) rep(j, 3) dist[i][j] = INF;
    queue<P> que;
    que.push(P(S, 0));
    dist[S][0] = 0;
    while (que.size()) {
        int now = que.front().first;
        int step = que.front().second;
        que.pop();
        for (int to: graph[now]) {
            int next_step = (step + 1) % 3;
            if (dist[to][next_step] != INF) continue;
            que.push(P(to, next_step));
            dist[to][next_step] = dist[now][step] + 1;
        }
    }

    int ans = dist[T][0];
    if (ans != INF) ans /= 3;
    cout << ans << endl;
}