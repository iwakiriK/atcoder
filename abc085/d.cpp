#include <bits/stdc++.h>
using namespace std;

int n, h, a[100000], b[100000], maxA, ans;

int main() {
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
        maxA = max(maxA, a[i]);
    }
    sort(b, b + n);
    for (int i = n - 1; i >= 0; i--) {
        if (b[i] <= maxA || h <= 0) break;
        h -= b[i];
        ans++;
    }
    if (h > 0) {
        ans += ceil(h * 1.0 / maxA);
    }

    cout << ans << endl;
    
    return 0;
}