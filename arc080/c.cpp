#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, num, b1, b2, b4;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 4 == 0) b4++;
        else if (num % 2 == 0) b2++;
        else b1++;
    }

    if (b4 + 1 < b1 + b2 % 2) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}