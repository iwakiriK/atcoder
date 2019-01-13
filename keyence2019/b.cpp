#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    string s, ans = "NO", str;
    cin >> s;
    rep(i, s.size()) {
        rep(j, s.size() - i) {
            str = s; str.erase(i, j);
            if (str == "keyence") ans = "YES";
        }
    }
    cout << ans << endl;
    return 0;
}