#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main() {
    string s; cin >> s;
    int ans = 1e9;
    rep(i, s.size() - 2) {
        int num = stoi(s.substr(i, 3));
        ans = min(ans, abs(753 - num));
    }
    cout << ans << endl;
    return 0;
}