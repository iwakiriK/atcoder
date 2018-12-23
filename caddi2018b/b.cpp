#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
int n, h, w, a, b, ans;

int main() {
    cin >> n >> h >> w;
    rep(i, n) {
        cin >> a >> b;
        if (a >= h && b >= w) ans++;
    }
    cout << ans << endl;
}