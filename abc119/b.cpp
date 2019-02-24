#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n;
double ans, x;

int main() {
    cin >> n;
    string u;
    rep(i, n) {
        cin >> x >> u;
        if (u[0] == 'B') x *= 380000;
        ans += x;
    }
    cout << ans << endl;
}