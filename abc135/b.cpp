#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, p, k = 0;
    cin >> N;
    rep(i, N) {
        cin >> p;
        if (p != i + 1) k++;
    }
    cout << (k > 2 ? "NO" : "YES") << endl;
}