#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;
    vector<int> p(A), q(B), r(C);
    rep(i, A) cin >> p[i];
    rep(i, B) cin >> q[i];
    rep(i, C) cin >> r[i];
    sort(p.rbegin(), p.rend());
    sort(q.rbegin(), q.rend());
    
    rep(i, X) r.push_back(p[i]);
    rep(i, Y) r.push_back(q[i]);
    sort(r.rbegin(), r.rend());
    cout << accumulate(r.begin(), r.begin() + X + Y, 0LL) << endl;
}