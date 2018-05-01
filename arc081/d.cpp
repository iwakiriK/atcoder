#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MOD = 1000000007;

int main() {
    int n, i = 1;
    string s1, s2;
    cin >> n >> s1 >> s2;
    bool isPair = false;
    ll ans = 3;
    if (s1[0] != s2[0]) {
        // AA
        // BB
        isPair = true;
        ans = 6;
        i = 2;
    }
    for (; i < n; i++) {
        if (isPair) {
            if (s1[i] != s2[i]) {
                ans = ans * 3 % MOD;
            }
        } else {
            ans = ans * 2 % MOD;
        }
        if (s1[i] == s2[i]) {
            isPair = false;
        } else {
            isPair = true;
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}