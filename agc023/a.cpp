#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n, tmp, ans = 0, sum = 0;
map<ll, int> mp;

int main() {    
    cin >> n;
    while (n--) {
        cin >> tmp;
        sum += tmp;
        mp[sum]++;
    }
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        ll num = it->second;
        if (num >= 2) {
            ans += num * (num-1) / 2; // nC_2
        }
        if (it->first == 0) ans += num;
    }
    
    cout << ans << endl;
    return 0;
}