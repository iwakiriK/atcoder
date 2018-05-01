#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    // (accuracy rate) p = 1 / pow(2, m)
    // (one time) x = 1900 * m + 100 * (n - m)
    // ans = x + (1 - p) * ans
    // ans = x / p
    cout << pow(2, m) * (1900 * m + 100 * (n - m)) << endl;
    
    return 0;
}