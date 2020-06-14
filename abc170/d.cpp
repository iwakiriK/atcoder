#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, A[200000], B[1000001], ans;

int main() {
    cin >> N;
    rep(i, N) cin >> A[i];
    sort(A, A + N);
    rep(i, N) {
        for (int j = A[i]; j <= A[N-1]; j += A[i]) {
            B[j]++;
        }
    }
    rep(i, N) if (B[A[i]] == 1) ans++;
    cout << ans << endl;
}