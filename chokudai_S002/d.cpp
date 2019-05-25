#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

ll n, a, b, ans;

int main() {
    cin >> n;
    rep(i, n) {
        cin >> a >> b;
        ans += max(a, b);
    }
    cout << ans << endl;
}