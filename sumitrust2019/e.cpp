#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, A, C[3], MOD = 1e9 + 7;
int64_t ans = 1;

int main() {
    cin >> N;
    rep(i, N) {
        cin >> A;
        int cnt = 0, id = -1;
        rep(j, 3) {
            if (C[j] == A) {
                cnt++;
                id = j;
            }
        }
        ans *= cnt;
        ans %= MOD;
        C[id]++;
    }
    cout << ans << endl;
}