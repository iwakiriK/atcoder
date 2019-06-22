#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int n, p;
    cin >> n;
    string s;
    tuple<string, int, int> spi[n];
    rep(i, n) {
        cin >> s >> p;
        p = -p;
        spi[i] = tie(s, p, i);
    }
    sort(spi, spi + n);
    rep(i, n) {
        cout << get<2>(spi[i])+1 << endl;
    }
}