#include <bits/stdc++.h>
#define int long long
using namespace std;

string a;
int ans = 1, letters[26];

signed main() {
    cin >> a;
    int len = a.size();
    for (int i = 0; i < len; i++) {
        letters[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        len -= letters[i];
        ans += letters[i] * len;
    }
    cout << ans << endl;
    return 0;
}