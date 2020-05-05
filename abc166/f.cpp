#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MAX_N = 1e5;
int N, A, B, C;
string s[MAX_N];
char ans[MAX_N];

void dfs(int i, int a, int b, int c) {
    if (i >= N) {
        puts("Yes");
        rep(i, N) cout << ans[i] << endl;
        exit(0);
    }
    if (s[i] == "AB") {
        if (a) ans[i] = 'B', dfs(i+1, a-1, b+1, c);
        if (b) ans[i] = 'A', dfs(i+1, a+1, b-1, c);
    } else if (s[i] == "BC") {
        if (b) ans[i] = 'C', dfs(i+1, a, b-1, c+1);
        if (c) ans[i] = 'B', dfs(i+1, a, b+1, c-1);
    } else {
        if (a) ans[i] = 'C', dfs(i+1, a-1, b, c+1);
        if (c) ans[i] = 'A', dfs(i+1, a+1, b, c-1);
    }
}

int main() {
    cin >> N >> A >> B >> C;
    rep(i, N) cin >> s[i];
    dfs(0, A, B, C);
    puts("No");
}