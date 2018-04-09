#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
using T = tuple<int, int, int>;

int main() {
    int n, a, b, c, ans = 0;
    cin >> n;
    vector<T> V(n*2);
    for (int i = 0; i < n * 2; i++) {
        scanf("%d %d", &a, &b);
        if (i < n) {
            V[i] = T(a, b, 0);
        } else {
            V[i] = T(a, b, 1);
        }
    }
    sort(V.begin(), V.end());
    set<int> S;
    for (int i = 0; i < n * 2; i++) {
        tie(a, b, c) = V[i];
        if (c == 0) S.insert(b);
        else {
            auto it = S.lower_bound(b);
            if (it != S.begin()) {
                it--;
                S.erase(it);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}