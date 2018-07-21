#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num, ans = 0;
    cin >> n;
    while(n--) {
        cin >> num;
        ans += num-1;
    }
    cout << ans << endl;
    return 0;
}