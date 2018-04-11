#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n, m, ans;

int main() {
    cin >> n >> m;
    if (n >= m / 2) ans = m / 2;
    else ans = n + (m - n * 2) / 4;
    cout << ans << endl;
    return 0;
}