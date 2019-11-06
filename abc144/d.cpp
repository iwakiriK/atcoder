#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b, x;
    cin >> a >> b >> x;
    double s = x / a, ans;
    if (s >= a * b / 2) {
        double h = (a * b - s) * 2 / a;
        ans = atan2(h, a);
    } else {
        double w = s * 2 / b;
        ans = atan2(b, w);
    }
    printf("%.10f\n", ans * 180 / M_PI);
}