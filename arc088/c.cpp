#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll x, y, num, ans;

int main() {
    cin >> x >> y;
    while (true) {
        if (x > y) break;
        ans++;
        x *= 2;
    }
    cout << ans << endl;
    return 0;
}