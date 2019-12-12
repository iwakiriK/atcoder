#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, ans = 0;
    cin >> N;
    int A[N], B[N], C[N];
    rep(i, N) cin >> A[i], A[i]--;
    rep(i, N) cin >> B[i];
    rep(i, N-1) cin >> C[i];
    rep(i, N) {
        ans += B[i];
        if (i != N - 1 && A[i] + 1 == A[i+1]) ans += C[A[i]];
    }
    cout << ans << endl;
}