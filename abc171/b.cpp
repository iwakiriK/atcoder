#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int p[N];
    rep(i, N) cin >> p[i];
    sort(p, p + N);
    cout << (accumulate(p, p + K, 0)) << endl;
}