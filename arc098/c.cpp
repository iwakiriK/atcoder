#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int sume[n+1]; sume[0] = 0;
    for (int i = 0; i < n; i++) {
        sume[i+1] = sume[i] + (s[i] == 'E');
    }
    int ans = (1 << 30);
    for (int i = 0; i < n; i++) {
        int tmp = (i - sume[i]) + (sume[n] - sume[i+1]);
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}