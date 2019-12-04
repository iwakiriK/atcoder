#include<bits/stdc++.h>
using namespace std;

int N, K, A, sum[200001];
int64_t ans;

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> A;
        sum[i+1] = (sum[i] + A - 1) % K;
    }
    map<int, int> mp;
    mp[0] = 1;
    for (int i = 1; i <= N; i++) {
        if (i >= K) mp[sum[i-K]]--;
        ans += mp[sum[i]];
        mp[sum[i]]++;
    }
    cout << ans << endl;
}