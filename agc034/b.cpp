#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

string s;
int64_t cnt, ans;

int main() {
    string s;
    cin >> s;
    s += '#';
    rep(i, s.size()) {
        if (s[i] == 'A') cnt++;
        else if (s.substr(i, 2) == "BC") {
            ans += cnt;
            i++;
        } else {
            cnt = 0;
        }
    }
    cout << ans << endl;
}