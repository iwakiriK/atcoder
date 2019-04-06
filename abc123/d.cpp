#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
typedef long long ll;
using namespace std;

int main() {
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    ll A[x], B[y], C[z];
    rep(i, x) cin >> A[i];
    rep(i, y) cin >> B[i];
    rep(i, z) cin >> C[i];

    vector<ll> AB;
    rep(i, x) {
        rep(j, y) {
            AB.push_back(A[i] + B[j]);
        }
    }
    sort(AB.rbegin(), AB.rend());

    vector<ll> ABC;
    rep(i, min(k, (int)AB.size())) {
        rep(j, z) {
            ABC.push_back(AB[i] + C[j]);
        }
    }
    sort(ABC.rbegin(), ABC.rend());
    
    rep(i, k) cout << ABC[i] << endl;
}
