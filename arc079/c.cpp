#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, m, a, b;
map<int, int> mp;
string ans = "IMPOSSIBLE";

int main() {
    scanf("%d%d", &n, &m);
    while(m--) {
    	scanf("%d%d", &a, &b);
    	if(a == 1) mp[b]++;
    	if(b == n) mp[a]++;
    	if(mp[a] == 2 || mp[b] == 2) ans = "POSSIBLE";
    }
    cout << ans << endl;
    return 0;
}