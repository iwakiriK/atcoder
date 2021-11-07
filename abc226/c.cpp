#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    int N; cin >> N;
    int T[N], K[N], x;
    vector<int> A[N];
    rep(i, N) {
        cin >> T[i] >> K[i];
        rep(j, K[i]) {
            cin >> x;
            A[i].push_back(x - 1);
        }
    }

    int64_t ans = 0;
    bool used[N] = {};
    used[N-1] = true;
    for (int i = N - 1; i >= 0; i--) {
        if (used[i]) {
            ans += T[i];
            rep(j, K[i]) {
                used[A[i][j]] = true;
            }
        }
    }
    cout << ans << endl;
}