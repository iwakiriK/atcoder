#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, H[100000], ans, mx;

int main() {
    cin >> N;
    rep(i, N) cin >> H[i];

    string ans = "Yes";
    rep(i, N) {
        if (H[i] < mx - 1) ans = "No";
        mx = max(mx, H[i]);
    }
    cout << ans << endl;
}