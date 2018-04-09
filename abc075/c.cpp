#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int LIMIT = 50;
int a[LIMIT], b[LIMIT], n, m, ans;
bool visited[LIMIT], graph[LIMIT][LIMIT];

void dfs(int v) {
    visited[v] = true;
    for (int v2 = 0; v2 < n; v2++) {
        if (!graph[v][v2]) continue;
        if (visited[v2]) continue;
        dfs(v2);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a[i], &b[i]);
        a[i]--; b[i]--;
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }
    for (int i = 0; i < m; i++) {
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;
        for (int j = 0; j < n; j++) visited[j] = false;
        dfs(0);
        for (int j = 0; j < n; j++) {
            if (!visited[j]) {
                ans++;
                break;
            }
        }
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }
    cout << ans << endl;
    return 0;
}