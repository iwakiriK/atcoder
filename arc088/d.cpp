#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size(), ans = n;
    for (int i = 1; i < n; i++) {
        if (s[i-1] != s[i]) ans = min(ans, max(i, n - i));
    }
    cout << ans << endl;
    return 0;
}