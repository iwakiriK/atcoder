#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int K, ans, r;

int main() {
    string S;
    cin >> S >> K;

    int N = S.size(), cnt[N+1] = {};
    rep(i, N) {
        cnt[i+1] = cnt[i] + (S[i] == '.');
    }

    rep(l, N) {
        while (r < N && cnt[r+1] - cnt[l] <= K) r++;
        ans = max(ans, r - l);
    }
    cout << ans << endl;
}
