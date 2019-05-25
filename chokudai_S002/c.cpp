#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, a, b, ans;

int main() {
    cin >> n;
    rep(i, n) {
        cin >> a >> b;
        ans = max(ans, a + b);
    }
    cout << ans << endl;
}