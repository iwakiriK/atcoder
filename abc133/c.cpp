#include<iostream>
typedef long long ll;
using namespace std;

const int MOD = 2019;

int main() {
    ll L, R, ans = MOD;
    cin >> L >> R;
    for (ll i = L; i < min(R, L + MOD); i++) {
        for (ll j = i + 1; j <= min(R, L + MOD); j++) {
            ans = min(ans, (i * j % MOD));
        }
    }
    cout << ans << endl;
}