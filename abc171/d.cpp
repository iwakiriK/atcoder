#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int64_t N, A, Q, ans, B, C;
map<int, int64_t>mp;

int main() {
    cin >> N;
    rep(i, N) {
        cin >> A;
        mp[A]++;
        ans += A;
    }
    cin >> Q;
    rep(i, Q) {
        cin >> B >> C;
        mp[C] += mp[B];
        ans += (C - B) * mp[B];
        mp[B] = 0;
        cout << ans << endl;
    }
}