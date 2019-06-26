#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    string L;
    cin >> L;

    int len = L.size();
    vector<int64_t> dp1(len+1), dp2(len+1);
    dp2[0] = 1;

    for (int i = 0; i < len; i++) {
        if (L[i] == '1') {
            (dp1[i+1] = dp1[i] * 3 + dp2[i]) %= MOD;
            (dp2[i+1] = dp2[i] * 2) %= MOD;
        } else {
            (dp1[i+1] = dp1[i] * 3) %= MOD;
            dp2[i+1] = dp2[i];
        }
    }
    cout << (dp1[len] + dp2[len]) % MOD << endl;
}