#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    vector<pair<int, int> >V(m);
    for (auto &x: V) {
        cin >> x.second >> x.first;
    }
    sort(V.begin(), V.end());
    int b = -1;
    for (auto x: V) {
        if (b <= x.second) {
            ans++;
            b = x.first;
        }
    }
    cout << ans << endl;

    return 0;
}