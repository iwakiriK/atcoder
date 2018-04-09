#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    int a[n+2];
    a[0] = a[n+1] = 0;
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= n + 1; i++) ans += abs(a[i] - a[i-1]);
    for (int i = 1; i <= n; i++) {
        cout << ans - abs(a[i-1] - a[i]) - abs(a[i] - a[i+1]) + abs(a[i-1] - a[i+1]) << endl;
    }
    return 0;
}