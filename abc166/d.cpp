#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll X;
    cin >> X;
    for (ll A = -999; A <= 999; A++) {
        for (ll B = -999; B <= 999; B++) {
            if (pow(A, 5) - pow(B, 5) == X) {
                cout << A << " " << B << endl;
                return 0;
            }
        }
    }
}