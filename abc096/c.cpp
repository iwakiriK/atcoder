#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int h, w;
char s[50][50];
string ans = "Yes";
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

void updateAns(int y, int x) {
    bool canCreate = false;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx == -1 || nx == w || ny == -1 || ny == h) continue;
        if (s[ny][nx] == '#') canCreate = true;
    }
    if (!canCreate) ans = "No";
}

int main() {
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') {
                updateAns(i, j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}