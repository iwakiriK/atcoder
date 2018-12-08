#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    string ans = "Christmas";
    int d; cin >> d;
    rep(i, 25 - d) {
        ans += " Eve";
    }
    cout << ans << endl;
    return 0;
}