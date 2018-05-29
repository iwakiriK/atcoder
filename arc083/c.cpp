#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    double ans1, ans2, con = -1;
    for (int a = 0; a <= F; a += 100 * A) {
        for (int b = 0; a + b <= F; b += 100 * B) {
            if (a + b == 0) continue;
            for (int c = 0; a + b + c <= F; c += C) {
                for (int d = 0; a + b + c + d <= F; d += D) {
                    double water = a + b;
                    double sugar = c + d;
                    double ncon = 100*sugar / (water+sugar);
                    if (E / 100.0 >= sugar / water && ncon > con) {
                        con = ncon;
                        ans1 = water+sugar;
                        ans2 = sugar;
                    }
                }
            }
        }
    }
    cout << ans1 << " " << ans2 << endl;
    
    return 0;
}