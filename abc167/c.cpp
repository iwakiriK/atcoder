#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, M, X, ans = 1e9;
    cin >> N >> M >> X;
    int C[N], A[N][M];
    rep(i, N) {
        cin >> C[i];
        rep(j, M) cin >> A[i][j];
    }

    rep(i, (1 << N)) {
        int cur[M] = {};
        int sum = 0;
        rep(j, N) {
            if (i & (1 << j)) {
                sum += C[j];
                rep(k, M) {
                    cur[k] += A[j][k];
                }
            }
        }
        bool ok = true;
        rep(j, M) {
            if (cur[j] < X) ok = false;
        }
        if (ok && sum < ans) ans = sum;
    }
    cout << (ans < 1e9 ? ans : -1) << endl;
}