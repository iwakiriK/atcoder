#include<iostream>
#define rep0(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
using namespace std;

const int LIMIT = 2001, MOD = 1e9 + 7;
int N, K;
int64_t C[LIMIT][LIMIT];

int main() {
    cin >> N >> K;
    rep0(i, LIMIT) {
        C[i][0] = 1;
        rep1(j, i) {
            C[i][j] = (C[i-1][j] + C[i-1][j-1]) % MOD;
        }
    }
    rep1(i, K) {
        cout << (C[N-K+1][i] * C[K-1][i-1]) % MOD << endl;
    }
}