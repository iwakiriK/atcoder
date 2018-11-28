#include<iostream>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,(n))
typedef long long ll;
using namespace std;

int n, ans, mod = 1e9 + 7;

int pow(int a) {
    int ret = 1;
    rep(i, 10) ret = (ll)ret * a % mod;
    return ret;
}

int main() {
    cin >> n;
    REP(pmax, 1, n+1) {
        int pways = pow(pmax) - pow(pmax-1) + mod;
        int qways = pow(n / pmax);
        ans = (ans + (ll)pways * qways) % mod;
    }
    cout << ans << endl;
    return 0;
}
