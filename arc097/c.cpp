#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

string s;
int k;
set<string> se;

int main() {    
    cin >> s >> k;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 1; j <= k; j++) {
            if (i + j > s.size()) break;
            se.insert(s.substr(i, j));
        }
    }
    for (int i = 1; i < k; i++) se.erase(se.begin());
    cout << *se.begin() << endl;
    return 0;
}