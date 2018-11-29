#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, t, a, x, ans, deff = 1e9;

int main() {
    cin >> n >> t >> a;
    rep(i, n) {
        cin >> x;
        int d = abs(1000 * t - x * 6 - a * 1000);
        if (d < deff) {
            deff = d;
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}