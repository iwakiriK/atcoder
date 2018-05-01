#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, a, b;
    ll k;
    cin >> n >> k;
    map<int, ll> mp;
    for (int i = 0; i < n; i++) {
        scanf(" %d %d", &a, &b);
        mp[a] += b;
    }
    for (auto it: mp) {
        if (k <= it.second) {
            cout << it.first << endl;
            break;
        }
        k -= it.second;
    }

    return 0;
}