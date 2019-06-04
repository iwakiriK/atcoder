#include<iostream>
using namespace std;

int A, B, C, D, E, F, ans1, ans2;
double ans = -1;

int main() {    
    cin >> A >> B >> C >> D >> E >> F;
    for (int a = 0; a <= F; a += 100 * A) {
        for (int b = 0; a + b <= F; b += 100 * B) {
            int water = a + b;
            if (water == 0) continue;
            for (int c = 0; water + c <= F; c += C) {
                for (int d = 0; water + c + d <= F; d += D) {
                    int sugar = c + d;
                    double cur = 100.0 * sugar / (water + sugar);
                    int e = water / 100 * E;
                    if (sugar <= e && cur > ans) {
                        ans = cur;
                        ans1 = water + sugar;
                        ans2 = sugar;
                    }
                }
            }
        }
    }
    printf("%d %d\n", ans1, ans2);
}