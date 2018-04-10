#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, a[51], maxi = 1;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        if (abs(a[i]) > abs(a[maxi])) maxi = i;
    }
    // Unify all signs of integers
    cout << (n * 2 - 1) << endl;
    for (int i = 1; i <= n; i++) {
        cout << maxi << " " << i << endl;
        a[i] += a[maxi];
    }
    // a[i] <= a[i+1]
    if (a[maxi] > 0) {
        for (int i = 1; i < n; i++) {
            cout << i << " " << i+1 << endl;
            a[i+1] += a[i];
        }
    } else {
        for (int i = n; i > 1; i--) {
            cout << i << " " << i-1 << endl;
            a[i-1] += a[i];
        }
    }

    return 0;
}