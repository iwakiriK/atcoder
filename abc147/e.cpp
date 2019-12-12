#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int H, W, diff[80][80], B, M = 12800, ans = 1e9;
bool dp[80][80][25601];

void dfs(int y, int x, int v) {
    if (dp[y][x][v+M]) return;
    dp[y][x][v+M] = true;

    int move1 = v + diff[y][x];
    int move2 = v - diff[y][x];
    if (y == H - 1 && x == W - 1) {
        ans = min({ans, abs(move1), abs(move2)});
    } else {
        if (y != H - 1) {
            dfs(y + 1, x, move1);
            dfs(y + 1, x, move2);
        }
        if (x != W - 1) {
            dfs(y, x + 1, move1);
            dfs(y, x + 1, move2);
        }
    }
}

int main() {
    cin >> H >> W;
    rep(i, H) rep(j, W) cin >> diff[i][j];
    rep(i, H) rep(j, W) {
        cin >> B;
        diff[i][j] = abs(diff[i][j] - B);
    }

    dfs(0, 0, 0);
    cout << ans << endl;
}