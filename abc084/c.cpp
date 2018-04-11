#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, c[499], s[499], f[499], ans;

int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        scanf("%d %d %d", &c[i], &s[i], &f[i]);
    }
    for (int i = 0; i < n; i++) {
        ans = 0;
        for (int j = i; j < n - 1; j++) {
            if (ans <= s[j]) {
                ans = s[j];
            } else if (ans % f[j] != 0) {
                ans = ans + f[j] - ans % f[j];
            }
            ans += c[j];
        }
        cout << ans << endl;
    }
    return 0;
}