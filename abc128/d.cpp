#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main() {
    int N, K, ans = 0;
    cin >> N >> K;
    vector<int> V(N);
    rep(i, N) cin >> V[i];

    rep(A, min(N, K) + 1) {
        rep(B, min(N, K) - A + 1) {
            vector<int> AB = V;
            AB.erase(begin(AB) + A, end(AB) - B);
            sort(begin(AB), end(AB));
            rep(i, K - A - B) {
                AB[i] = max(0, AB[i]);
            }
            ans = max(ans, accumulate(begin(AB), end(AB), 0));
        }
    }
    cout << ans << endl;
}