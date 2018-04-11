#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
const int MAX_H = 50, MAX_W = 50, INF = (1 << 30);
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int dist[MAX_H][MAX_W], h, w, num_white;
bool isWhite[MAX_H][MAX_W];
char ch;

int main() {
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> ch;
            if (ch == '.') {
                num_white++;
                isWhite[i][j] = true;
            } else {
                isWhite[i][j] = false;
            }
            dist[i][j] = INF;
        }
    }
    // breadth-first search
    queue<P> que;
    que.push(P(0, 0));
    dist[0][0] = 0;
    while (que.size()) {
        P p = que.front(); que.pop();
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (0 <= nx && nx < w && 0 <= ny && ny < h && isWhite[ny][nx] && dist[ny][nx] == INF) {
                que.push(P(nx, ny));
                dist[ny][nx] = dist[p.second][p.first] + 1;
            }
        }
    }

    int ans = num_white - dist[h-1][w-1] - 1;
    if (ans < 0) ans = -1;
    cout << ans << endl;

    return 0;
}