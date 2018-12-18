#include<bits/stdc++.h>
using namespace std;

char ch;
long ans, b;

int main() {
    while(cin >> ch) {
        if (ch == 'B') b++;
        else ans += b;
    }
    cout << ans << endl;
    return 0;
}