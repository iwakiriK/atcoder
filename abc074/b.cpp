#include<iostream>
using namespace std;

int main() {
    int n, k, x, ans = 0;
    cin >> n >> k;
    while(n--) {
        cin >> x;
        ans += min(x, k - x) * 2;
    }
    cout << ans << endl;
}