#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    rep(i, n) {
        cin >> a >> b;
        cout << a % b << endl;
    }
}