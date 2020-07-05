#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, a[200000], all;

int main() {
    cin >> N;
    rep(i, N) {
        cin >> a[i];
        all ^= a[i];
    }
    rep(i, N) {
        cout << (all ^ a[i]) << endl;
    }
}