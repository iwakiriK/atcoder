#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i];
    B = A;
    sort(B.rbegin(), B.rend());
    rep(i, N) {
        cout << (A[i] != B[0] ? B[0] : B[1]) << endl;
    }
}