#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, tmp, side1 = 0, side2 = 0;
    cin >> n;
    map<int, int>mp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        mp[tmp]++;
    }
    for (auto it: mp) {
        if (it.second >= 4) {
            side1 = side2 = it.first;
        }
        else if (it.second >= 2) {
            side2 = side1;
            side1 = it.first;
        }
    }
    cout << (ll)side1 * side2 << endl;
    return 0;
}