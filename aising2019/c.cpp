#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

const int LIM = 400, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int h, w;
string s[LIM];
bool visited[LIM][LIM];
ll ans, bk, wt;

void dfs(int sy, int sx) {
    visited[sy][sx] = true;
    if (s[sy][sx] == '.') wt++; else bk++;
    
    rep(i, 4) {
        int ny = sy + dy[i], nx = sx + dx[i];
        if (ny < 0 || ny >= h || nx < 0 || nx >= w || visited[ny][nx]) continue;
        if (s[sy][sx] != s[ny][nx]) dfs(ny, nx);
    }
}

int main() {
    cin >> h >> w;
    rep(i, h) cin >> s[i];
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '#') {
                bk = wt = 0;
                dfs(i, j);
                ans += bk * wt;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
