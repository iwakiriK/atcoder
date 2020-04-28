#include<bits/stdc++.h>
using namespace std;

const int M = 2019;
int64_t ans;

int main() {
    string S; cin >> S;
    map<int, int> mp;
    mp[0] = 1;
    int N = S.size(), ten = 1, total = 0;
    for (int i = 0; i < N; i++) {
        total = ((S[N-i-1] - '0') * ten + total) % M;
        ans += mp[total]++;
        ten = ten * 10 % M;
    }
    cout << ans << endl;
}