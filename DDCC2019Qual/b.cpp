#include<iostream>
using namespace std;

int n, ans;

int main() {
    cin >> n;
    ans = 2 * (n/2) * (n/2 - 1); // 1+2+...+n == n * (n+1) / 2
    if (n % 2 == 1) ans++;
    cout << ans << endl;
    return 0;
}
