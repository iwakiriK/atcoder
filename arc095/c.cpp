#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        y[i] = x[i];
    }
    sort(y, y + n);
    int ans1 = y[n/2-1], ans2=y[n/2], ans;
    for (int i = 0; i < n; i++) {
        if (x[i] <= ans1) ans = ans2;
        else ans = ans1;
        cout << ans << endl;
    }
    
    return 0;
}