#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    int N, ans = 0;
    cin >> N;
    int x[N], y[N];
    rep(i, N) {
        cin >> x[i] >> y[i];
    }

    set<pair<int, int>> se;
    rep(i, N) {
        rep(j, N) {
            int X = x[i] - x[j];
            int Y = y[i] - y[j];
            int g = __gcd(X, Y);
            if (g == 0) continue;
            X /= g;
            Y /= g;
            se.insert(make_pair(X, Y));
            se.insert(make_pair(-X, -Y));
        }
    }
    cout << se.size() << endl;
}
