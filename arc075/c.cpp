#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, s[100], ans;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        ans += s[i];
    }
    if (ans % 10 == 0) {
        sort(s, s + n);
        for (int i = 0; i < n; i++) {
            if (s[i] % 10 != 0) {
                ans -= s[i];
                break;
            }
        }
        if (ans % 10 == 0) ans = 0;
    }
    cout << ans << endl;
    return 0;
}