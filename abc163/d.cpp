#include<iostream>
using namespace std;

int64_t N, K, MOD = 1e9 + 7, ans;

int main() {    
    cin >> N >> K;
    while (K <= N + 1) {
        int64_t L = (K - 1) * K / 2;
        int64_t R = K * (N + (N - K + 1)) / 2;
        ans += R - L + 1;
        ans %= MOD;
        K++;
    }
    cout << ans << endl;
}