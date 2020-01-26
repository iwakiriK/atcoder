#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, K, H[200000];
int64_t ans;

int main() {
    cin >> N >> K;
    rep(i, N) cin >> H[i];

    sort(H, H + N);
    rep(i, N - K) {
        ans += H[i];
    }
    cout << ans << endl;
}