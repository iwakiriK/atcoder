#include<bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,(n))
typedef long long ll;
using namespace std;

int main() {
    int a[4];
    rep(i, 4) cin >> a[i];
    sort(a, a + 4);
    string ans = "YES";
    if (a[0] != 1 || a[1] != 4 || a[2] != 7 || a[3] != 9) ans = "NO";
    cout << ans << endl;
    
    return 0;
}