#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;

int n, a, b, p, t1, t2, t3;

int main() {
    cin >> n >> a >> b;
    rep(i, n) {
        cin >> p;
        if (p <= a) t1++;
        else if (p <= b) t2++;
        else t3++;
    }
    cout << min({t1, t2, t3}) << endl;
    return 0;
}