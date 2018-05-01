#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int a, b, c, x, y;

int main() {
    cin >> a >> b >> c >> x >> y;
    c *= 2;
    int ans = a * x + b * y;
    for (int i = min(x, y); i <= max(x, y); i++) {
        int tmpa = a * max(0, x - i);
        int tmpb = b * max(0, y - i);
        ans = min(ans, c * i + tmpa + tmpb);
    }
    cout << ans << endl;
    return 0;
}