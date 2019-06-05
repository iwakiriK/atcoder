#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

string divi[4] = {"maerd", "remaerd", "esare", "resare"};

int main() {
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    int i = 0;
    bool ng;
    while (i < S.size()) {
        ng = true;
        rep(j, 4) {
            string d = divi[j];
            if (S.substr(i, d.size()) == d) {
                ng = false;
                i += d.size();
            }
        }
        if (ng) break;
    }
    cout << (ng ? "NO" : "YES") << endl;
}