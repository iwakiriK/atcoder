#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int c[3][3], a[3], b[3];
string ans = "Yes";

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0 ; j < 3; j++) {
            cin >> c[i][j];
        }
    }
    // regard a[0] as 0
    for (int i = 0; i < 3; i++) b[i] = c[0][i];
    for (int i = 0; i < 3; i++) a[i] = c[i][0] - b[0];
    // check
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i] + b[j] != c[i][j]) ans = "No";
        }
    }

    cout << ans << endl;

    return 0;
}