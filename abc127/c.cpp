#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, m, l, r, ansL, ansR = 1e9;

int main() {
    cin >> n >> m;
    rep(i, m) {
        cin >> l >> r;
        ansL = max(ansL, l);
        ansR = min(ansR, r);
    }
    cout << max(ansR - ansL + 1, 0) << endl;
}