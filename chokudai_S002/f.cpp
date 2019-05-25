#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    set<pair<int, int> >S;
    rep(i, n) {
        cin >> a >> b;
        if (a > b) swap(a, b);
        S.insert(make_pair(a, b));
    }
    cout << S.size() << endl;
}