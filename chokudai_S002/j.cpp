#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MAX_N = 50000;
int n, a[MAX_N], b[MAX_N], ans;

int main() {
    cin >> n;
    rep(i, n) cin >> a[i] >> b[i];
    // Store all divisors
    set<int> S;
    for (int i = 1; i * i <= a[0]; i++) {
        if (a[0] % i == 0) {
            S.insert(i);
            S.insert(a[0] / i);
        }
    }
    for (int i = 1; i * i <= b[0]; i++) {
        if (b[0] % i == 0) {
            S.insert(i);
            S.insert(b[0] / i);
        }
    }
    // Solve
    for(int i: S) {
        bool ok = true;
        rep(j, n) {
            if (a[j] % i != 0 && b[j] % i != 0) ok = false;
        }
        if (ok) ans = i;
    }
    cout << ans << endl;
}