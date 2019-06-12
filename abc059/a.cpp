#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    string s[3];
    rep(i, 3) cin >> s[i];
    rep(i, 3) cout << (char)toupper(s[i][0]);
}