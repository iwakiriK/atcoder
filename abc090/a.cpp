#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    string c[3];
    rep(i, 3) cin >> c[i];
    cout << c[0][0] << c[1][1] << c[2][2] << endl;
}