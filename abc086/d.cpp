#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, K, x, y, ans = 0;
    cin >> N >> K;
    int K2 = K + K, sum[K2+1][K2+1] = {};
    rep(i, N) {
        char c;
        cin >> x >> y >> c;
        if (c == 'W') y += K;
        x %= K2;
        y %= K2;
        sum[x+1][y+1]++;
    }
    rep(y, K2) {
        rep(x, K2) {
            sum[y+1][x+1] += sum[y+1][x] + sum[y][x+1] - sum[y][x];
        }
    }
    rep(y, K + 1) {
        rep(x, K + 1) {
            int tmp = sum[y][x] - sum[y][0] - sum[0][x] + sum[0][0];
            tmp += sum[y][K2] - sum[y][x+K] - sum[0][K2] + sum[0][x+K];
            tmp += sum[y+K][x+K] - sum[y+K][x] - sum[y][x+K] + sum[y][x];
            tmp += sum[K2][x] - sum[K2][0] - sum[y+K][x] + sum[y+K][0];
            tmp += sum[K2][K2] - sum[K2][x+K] - sum[y+K][K2] + sum[y+K][x+K];
            tmp = max(tmp, N - tmp);
            ans = max(ans, tmp);
        }
    }
    cout << ans << endl;
}