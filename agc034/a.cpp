#include<iostream>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

int main() {
    int n, a, b, c, d;
    string s;
    cin >> n >> a >> b >> c >> d >> s;
    bool ok = true;
    REP(i, a, c) {
        if (s.substr(i-1, 2) == "##") ok = false;
    }
    REP(i, b, d) {
        if (s.substr(i-1, 2) == "##") ok = false;
    }
    if (ok && c > d) {
        ok = false;
        REP(i, b, d+1) {
            if (s.substr(i-2, 3) == "...") ok = true;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}