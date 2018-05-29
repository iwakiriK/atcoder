#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, a, cnt[100002], ans;

int main() {
    cin >> n;
    while(n--) {
        scanf(" %d", &a);
        if (a != 0) cnt[a-1]++;
        cnt[a]++;
        cnt[a+1]++;
    }
    for (int i = 0; i <= 100001; i++) {
        ans = max(ans, cnt[i]);
    }
    cout << ans << endl;
    return 0;
}