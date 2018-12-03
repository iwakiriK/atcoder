#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n, ans;

void dfs(ll x, int binary) {
    if (x > n) return;
    if (binary == 7) ans++;
    
    dfs(10 * x + 3, binary|1);
    dfs(10 * x + 5, binary|2);
    dfs(10 * x + 7, binary|4);
}

int main() {
    cin >> n;
    dfs(0, 0);
    cout << ans << endl;
    return 0;
}