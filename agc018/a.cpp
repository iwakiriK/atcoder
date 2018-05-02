#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, k, a, gcd, Max;

int main() {
    cin >> n >> k;
    while (n--) {
        cin >> a;
        gcd = __gcd(gcd, a);
        Max = max(Max, a);
    }
    string ans = "IMPOSSIBLE";
    if (k % gcd == 0 && k <= Max) ans = "POSSIBLE";
    cout << ans << endl;
    return 0;
}