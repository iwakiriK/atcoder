#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, ans;
string a, b, c;

int main() {
    cin >> n >> a >> b >> c;
    rep(i, n) {
        if (a[i] == b[i] && b[i] == c[i]) {
            continue;
        } else if (a[i] == b[i] || b[i] == c[i] || c[i] == a[i]) {
            ans++;
        } else {
            ans += 2;
        }
    }
    cout << ans << endl;
    return 0;
}