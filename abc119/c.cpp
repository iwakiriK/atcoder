#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, A, B, C, l[8], ans = 1e9;

void dfs(int cur, int a, int b, int c, int sum) {
    if (cur == N) {
        if (min({a, b, c}) > 0) {
            ans = min(ans, abs(a - A) + abs(b - B) + abs(c - C) + sum - 30);
        }
        return;
    }
    dfs(cur + 1, a, b, c, sum);
    dfs(cur + 1, a + l[cur], b, c, sum + 10);
    dfs(cur + 1, a, b + l[cur], c, sum + 10);
    dfs(cur + 1, a, b, c + l[cur], sum + 10);
}

int main() {
    cin >> N >> A >> B >> C;
    rep(i, N) cin >> l[i];
    dfs(0, 0, 0, 0, 0);
    cout << ans << endl;
    return 0;
}