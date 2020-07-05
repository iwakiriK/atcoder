#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int H, W, K, ans = 0;
    cin >> H >> W >> K;
    string c[H];
    rep(i, H) {
        cin >> c[i];
    }

    rep(h, (1 << H)) rep(w, (1 << W)) {
        int cnt = 0;
        rep(i, H) rep(j, W) {
            if ((h >> i & 1) && (w >> j & 1) && c[i][j] == '#') cnt++;
        }
        if (cnt == K) ans++;
    }
    cout << ans << endl;

}