#include<iostream>
#define rep1(i,n) for(int i=1;i<=n;i++)
using namespace std;

const int N = 2002;
int H, W, ans, U[N][N], R[N][N], D[N][N], L[N][N];
char S[N][N];

int main() {
    cin >> H >> W;
    rep1(i, H) cin >> S[i] + 1;

    rep1(i, H) rep1(j, W) {
        if (S[i][j] == '.') {
            L[i][j] = L[i][j-1] + 1;
            U[i][j] = U[i-1][j] + 1;
        }
    }
    for (int i = H; i > 0; i--) for (int j = W; j > 0; j--) {
        if (S[i][j] == '.') {
            R[i][j] = R[i][j+1] + 1;
            D[i][j] = D[i+1][j] + 1;
        }
    }
    rep1(i, H) rep1(j, W) {
        if (S[i][j] == '.') ans = max(ans, U[i][j] + R[i][j] + D[i][j] + L[i][j] - 3);
    }
    cout << ans << endl;
}