#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, ans, h, before;

int main() {
    cin >> n;
    rep(i, n) {
        cin >> h;
        if (h > before) ans += h - before;
        before = h;
    }
    cout << ans << endl;
    return 0;
}