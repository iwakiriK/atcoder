#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

string str = "MARCH";
ll march[5];

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < 5; j++) {
            if (s[0] == str[j]) {
                march[j]++;
                break;
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                ans += march[i] * march[j] * march[k];
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}