#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    int N, L; cin >> N;
    set<vector<int>> se;
    rep(i, N) {
        cin >> L;
        vector<int> a(L);
        rep(j, L) cin >> a[j];
        se.insert(a);
    }
    cout << se.size() << endl;
}
