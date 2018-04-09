#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MAX_N = 100;
int n, ans, sum, a[2][MAX_N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) scanf("%d", &a[0][i]);
    for (int i = 0; i < n; i++) scanf("%d", &a[1][i]);
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j <= i; j++) sum += a[0][j];
        for (int j = i; j < n; j++) sum += a[1][j];
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}