#include <bits/stdc++.h>
using namespace std;

int n, k, a[200001], num, ans;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        a[num]++;
    }
    sort(a + 1, a + n + 1);
    for (int i = n - k; a[i]; i--) ans += a[i];
    cout << ans << endl;
    return 0;
}