#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    string S;
    cin >> S;
    int cnt = 0, N = S.size();
    int ans[N] = {};
    rep(c, 2) {
        int cnt = 0;
        rep(i, N) {
            if (S[i] == 'R') {
                cnt++;
            } else {
                ans[i] += cnt / 2;
                ans[i-1] += (cnt + 1) / 2;
                cnt = 0;
            }
        }

        reverse(ans, ans + N);
        reverse(S.begin(), S.end());
        rep(j, N) S[j] = (S[j] == 'R' ? 'L' : 'R');
    }

    rep(i, N) cout << ans[i] << " ";
    cout << endl;
}