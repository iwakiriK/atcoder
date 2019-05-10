#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, k, ans, l[50];

int main() {
    cin >> n >> k;
    rep(i, n) cin >> l[i];
    
    sort(l, l + n, greater<int>());
    rep(i, k) ans += l[i];
    cout << ans << endl;
}