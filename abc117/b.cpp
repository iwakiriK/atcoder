#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, l[10], sum;

int main() {
    cin >> n;
    rep(i, n) cin >> l[i];
    sort(l, l + n);
    rep(i, n - 1) sum += l[i];
    cout << (sum > l[n-1] ? "Yes" : "No") << endl;
}