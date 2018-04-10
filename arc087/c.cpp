#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
     
int n, num, ans;
     
int main() {
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        mp[num]++;
    }
    for (auto p: mp) {
        int x = p.first;
        int n = p.second;
        if (n < x) ans += n;
        else ans += n - x;
    }
    cout << ans << endl;
    return 0;
}