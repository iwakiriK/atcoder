#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, z, w, a[2001], ans;
    cin >> n >> z >> w;
    for (int i = 1; i <= n; i++) cin >> a[i];

    if (n == 1) ans = abs(a[1] - w);
    else ans = max(abs(a[n] - w), abs(a[n] - a[n-1]));
    cout << ans << endl;

    return 0;
}