#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    int a, b, sum[N+1][N+1];
    rep(i, N+1) rep(j, N+1) sum[i][j] = 0;
    rep(i, M) {
        cin >> a >> b;
        sum[a][b]++;
    }
    rep(i, N+1) rep(j, N) sum[i][j+1] += sum[i][j];
    rep(i, N+1) rep(j, N) sum[j+1][i] += sum[j][i];
    rep(i, Q) {
        cin >> a >> b;
        cout << sum[b][b] - sum[a-1][b] - sum[b][a-1] + sum[a-1][a-1] << endl;
    }
    return 0;
}