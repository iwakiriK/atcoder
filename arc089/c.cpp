#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, t, x, y, nx, ny, nt, cost, duration;
string ans = "Yes";

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &t, &x, &y);
        cost = abs(nx - x) + abs(ny - y);
        duration = t - nt;
        if (cost > duration || cost % 2 != duration % 2) ans = "No";
        x = nx, y = ny, t = nt;
    }
    cout << ans << endl;
    
    return 0;
}