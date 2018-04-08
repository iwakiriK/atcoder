#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    ll num, ans = 1;
    while(n--) {
        cin >> num;
        ans = ans / __gcd(ans, num) * num;
    }
    cout << ans << endl;

    return 0;
}