#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i++) cin >> a[i];
    sort(a, a + 3);
    int ans = 0;
    // 最大値 or 最大値-1まで+2
    for (int i = 0; i < 2; i++) {
        if (a[i] + 1 < a[2]) {
            int addition = (a[2] - a[i]) / 2 * 2;
            a[i] += addition;
            ans += addition / 2;
        }
    }
    // 貪欲法でシミュレーション
    while (true) {
        sort(a, a + 3);
        if (a[0] < a[2]) {
            a[0]++;
            a[1]++;
            ans++;
            continue;
        }
        break;
    }
    cout << ans << endl;
    return 0;
}