#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main() {
    string s, t, ans = "Yes";
    cin >> s >> t;
    map<char, int> sm, tm;
    rep(i, s.size()) sm[s[i]]++;
    rep(i, t.size()) tm[t[i]]++;

    vector<int> sv, tv;
    for(auto x: sm) sv.push_back(x.second);
    for(auto x: tm) tv.push_back(x.second);
    sort(sv.begin(), sv.end());
    sort(tv.begin(), tv.end());

    if (sv.size() != tv.size()) ans = "No";
    rep(i, min(sv.size(), tv.size())) {
        if (sv[i] != tv[i]) ans = "No";
    }
    cout << ans << endl;
    return 0;
}