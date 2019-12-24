#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N+1], B;
    long ans = 0;
    rep(i, N+1) cin >> A[i];
    rep(i, N) {
        cin >> B;
        int t = min(A[i] + A[i+1], B);
        ans += t;
        A[i+1] -= t - min(A[i], B);
    }
    cout << ans << endl;
}