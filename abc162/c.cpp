#include<bits/stdc++.h>
#define rep(i,n) for(int i=1;i<=n;++i)
using namespace std;

int main() {
    int K;
    cin >> K;
    int64_t ans = 0;
    rep(i, K) rep(j, K) rep(k, K) {
        ans += __gcd(__gcd(i, j), k);
    }
    cout << ans << endl;
}