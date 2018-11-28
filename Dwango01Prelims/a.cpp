#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, a[100], ave, b, ans, Min = 1e9;

int main() {
    cin >> n;
    rep(i, n) {
        cin >> a[i];
        ave += a[i];
    }
    rep(i, n) {
        b = abs(a[i] * n - ave);
        if (b < Min) {
            Min = b;
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
}