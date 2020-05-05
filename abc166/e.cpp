#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N;
    map<int, int> cnt;
    int64_t ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> A;
        ans += cnt[i - A];
        cnt[A + i]++;
    }
    cout << ans << endl;
}