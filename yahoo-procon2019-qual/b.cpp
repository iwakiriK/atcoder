#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int num[4], a;

int main() {
    rep(i, 6) {
        cin >> a;
        num[a-1]++;
    }
    string ans = "YES";
    rep(i, 4) if (num[i] > 2) ans = "NO";
    cout << ans << endl;
}