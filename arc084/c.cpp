#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++) scanf(" %d", &a[i]);
    for (int i = 0; i < n; i++) scanf(" %d", &b[i]);
    for (int i = 0; i < n; i++) scanf(" %d", &c[i]);
    sort(a, a + n);
    sort(c, c + n);
    
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll numA = lower_bound(a, a + n, b[i]) - a;
        ll numC = upper_bound(c, c + n, b[i]) - c;
        numC = (ll)n - numC;
        ans += numA * numC;
    }
    cout << ans << endl;
    return 0;
}