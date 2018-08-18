#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, ans = "1";
    long long k;
    cin >> s >> k;
    for(int i = 0; i < k; i++) {
        if (s[i] != '1') {
            ans = s[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}