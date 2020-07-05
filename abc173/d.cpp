#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    rep(i, N) {
        cin >> A[i];
    }
    sort(A.rbegin(), A.rend());

    int64_t ans = 0;
    rep(i, N-1) {
        ans += A[(i+1)/2];
    }
    cout << ans << endl;
}