#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MAX_A = 90000;
int px[MAX_A+1], py[MAX_A+1], sum[MAX_A+1];

int main() {
    int h, w, d, a, q, l, r;
    cin >> h >> w >> d;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a;
            px[a] = j, py[a] = i;
        }
    }
    for (int i = d + 1; i <= h * w; i++) {
        sum[i] = sum[i-d] + abs(px[i] - px[i-d]) + abs(py[i] - py[i-d]);
    }
    cin >> q;
    while(q--) {
        cin >> l >> r;
        cout << sum[r] - sum[l] << endl;
    }

    return 0;
}