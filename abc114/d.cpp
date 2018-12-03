#include<bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,(n))
using namespace std;

int n, e[101], ans;

int num(int x) {
    int ret = 0;
    rep(i, n+1) {
        if (e[i] >= x - 1) ret++;
    }
    return ret;
}

int main() {
    cin >> n;
    REP(i, 1, n + 1) {
        int cur = i;
        REP(j, 2, i + 1) {
            while (cur % j == 0) {
                e[j]++;
                cur /= j;
            }
        }
    }

    cout << num(75) + num(25) * (num(3) - 1) + num(15) * (num(5) - 1) 
        + num(5) * (num(5) - 1) / 2 * (num(3) - 2) << endl;

    return 0;
}