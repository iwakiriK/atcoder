#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
typedef long long ll;
using namespace std;

int N, a[300000];
ll ans;

int main() {
    cin >> N;
    rep(i, 3 * N) cin >> a[i];
    sort(a, a + 3 * N, greater<int>()); // desc sort
    rep(i, N) ans += a[i*2+1];
    cout << ans << endl;
}