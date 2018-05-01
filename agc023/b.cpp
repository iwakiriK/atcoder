#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    char s[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &s[i][j]);
        }
    }
    for (int k = 0; k < n; k++) {
        bool isGood = true;
        for (int i = 1; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (s[i-1][j] != s[j][i-1]) isGood = false;
            }
        }
        if (isGood) ans += n;
        // swap
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                swap(s[i][j-1], s[i][j]);
            }
        }
    }
    if (n == 1) ans = 1;
    cout << ans << endl;
    return 0;
}