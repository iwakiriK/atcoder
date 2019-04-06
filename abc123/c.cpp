#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

int main() {
    ll n, A[5];
    cin >> n;
    rep(i, 5) cin >> A[i];
    ll minMove = *min_element(A, A + 5);
    ll ans = ceil((double)n / minMove) + 4;
    cout << ans << endl;
}
