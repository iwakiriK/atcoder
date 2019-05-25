#include<bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,(n))
using namespace std;

const int MAX_N = 200000;
int n, a[MAX_N], b[MAX_N];

bool isStronger(int idx1, int idx2) {
    // num of turns to fall
    int num1 = (a[idx1] + b[idx2] - 1) / b[idx2];
    int num2 = (a[idx2] + b[idx1] - 1) / b[idx1];
    return num1 > num2;
}

int main() {
    //input
    cin >> n;
    rep(i, n) cin >> a[i] >> b[i];

    // Find the strongest candidate
    int idx = 0;
    REP(i, 1, n) {
        if (isStronger(i, idx)) idx = i;
    }
    // Check if it is really the strongest
    rep(i, n) {
        if (i == idx) continue;
        if (!isStronger(idx, i)) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << idx + 1 << endl;
}