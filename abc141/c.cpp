#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, K, Q, A;
    cin >> N >> K >> Q;
    vector<int> pt(N, K - Q);
    rep(i, Q) {
        cin >> A;
        pt[A-1]++;
    }

    rep(i, N) {
        cout << (pt[i] > 0 ? "Yes" : "No") << endl;
    }
}