#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    string s, t, ans = "UNRESTORABLE";
    cin >> s >> t;
    int i, j;
    for (i = s.size() - t.size(); i >= 0; i--) {
        bool isNotAnswer = false;
        for (j = 0; j < t.size(); j++) {
            if (s[i+j] != t[j] && s[i+j] != '?') {
                isNotAnswer = true;
                break;
            }
        }
        if (!isNotAnswer) {
            ans = s;
            for (j = 0; j < t.size(); j++) ans[i+j] = t[j];
            for (j = 0; j < s.size(); j++) if (ans[j] == '?') ans[j] = 'a';
            break;
        }
    }
    cout << ans << endl;
    
    return 0;
}