#include<bits/stdc++.h>
using namespace std;

int main() {
    int64_t A, B, C, D;
    cin >> A >> B >> C >> D;

    int64_t ans = B - A + 1;
    ans -= (B / C) - (A - 1) / C;
    ans -= (B / D) - (A - 1) / D;
    int64_t lcm = C * D / __gcd(C, D);
    ans += (B / lcm) - (A - 1) / lcm;
    cout << ans << endl;
}