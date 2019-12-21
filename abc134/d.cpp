#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, a[200001], b[200001];

int main() {
    cin >> N;
    rep(i, N) cin >> a[i+1];

    vector<int> ans;
    for (int i = N; i > 0; i--) {
        int sum = 0;
        for (int j = i + i; j <= N; j += i) {
            sum ^= b[j];
        }
        if (sum ^ a[i]) {
            b[i] = 1;
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;
    rep(i, ans.size()) {
        cout << ans[i] << (i != ans.size() - 1 ? " " : "\n");
    }
}