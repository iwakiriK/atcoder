#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    int t[N];
    ll ans = T;
    for (int i = 0; i < N; i++) scanf(" %d", &t[i]);
    for (int i = 1; i < N; i++) {
        if (t[i]-t[i-1] >= T) ans += T;
        else ans += t[i] - t[i-1];
    }
    cout << ans << endl;
    return 0;
}