#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MAX_Q = 50;
int N, M, Q, ans;
int a[MAX_Q], b[MAX_Q], c[MAX_Q], d[MAX_Q];

void dfs(vector<int> A) {
    if (A.size() >= N) {
        int cur = 0;
        rep(i, Q) {
            if (A[b[i]] - A[a[i]] == c[i]) {
                cur += d[i];
            }
        }
        ans = max(ans, cur);
        return;
    }
    
    A.push_back(A.back());
    while (A.back() <= M) {
        dfs(A);
        A.back()++;
    }
}

int main() {
    cin >> N >> M >> Q;
    rep(i, Q) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        a[i]--; b[i]--;
    }
    dfs(vector<int>{1});
    cout << ans << endl;
}