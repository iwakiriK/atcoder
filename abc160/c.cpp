#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;
    int A[N];
    rep(i, N) cin >> A[i];
    int ans = A[N-1] - A[0];
    rep(i, N-1) {
        ans = min(ans, K - A[i+1] + A[i]);
    }
    cout << ans << endl;
}