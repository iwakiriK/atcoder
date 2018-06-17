#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) REP(i,0,n)
typedef long long ll;
using namespace std;
int main() {
    int n;
    cin >> n;
    ll num, ans = 0;
    rep(i, n) {
        cin >> num;
        while (true) {
            if (num % 2 != 0) break;
            ans++;
            num /= 2;
        }
    }
    cout << ans << endl;

    return 0;
}