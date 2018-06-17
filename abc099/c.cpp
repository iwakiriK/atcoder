#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, ans = 100000;

void dfs(int num, int cnt) {
    if (ans < cnt) return;
    if (num < 6) {
        ans = min(ans, cnt + num);
        return;
    }
    // pow(9, 6) > N
    for (int i = 5; i > 0; i--) {
        int tmp = num - pow(9, i);
        if (tmp < 0) continue;
        dfs(tmp, cnt+1);
        break;
    }
    // pow(6, 7) > N
    for (int i = 6; i > 0; i--) {
        int tmp = num - pow(6, i);
        if (tmp < 0) continue;
        dfs(tmp, cnt+1);
        break;
    }
}

int main() {
    cin >> n;
    dfs(n, 0);
    cout << ans << endl;
    return 0;
}