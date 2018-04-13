#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n, m, ans;

int main() {
    cin >> n >> m;
    if (n == 1 && m == 1) ans = 1;
    else if (n == 1 || m == 1) ans = max(n, m) - 2;
    else ans = (n - 2) * (m - 2);
    cout << ans << endl;

    return 0;
}