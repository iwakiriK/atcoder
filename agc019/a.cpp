#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll q, h, s, d, n, ans;

int main() {
    cin >> q >> h >> s >> d >> n;
    s = min(min(4 * q, 2 * h), s);
    d = min(2 * s, d);
    ans = (n / 2) * d + (n % 2) * s;

    cout << ans << endl;
    return 0;
}