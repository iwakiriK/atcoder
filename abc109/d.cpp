#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) REP(i,0,n)
using namespace std;

const int LIM1 = 500, LIM2 = 250000;
int h, w, a[LIM1][LIM1];

int main() {
    cin >> h >> w;
    rep(i, h) rep(j, w) cin >> a[i][j];
    bool has = false;
    if (a[0][0] % 2 == 1) {
        has = true;
    }
    int x = 1, y = 0 // current position
    int ox = 0, oy = 0; // odd position
    int ax[LIM2], ay[LIM2], adx[LIM2], ady[LIM2], i = 0; // ans

    while(true) {
        if (x >= w) {
            x = w-1;
            y++;
        } else if (x < 0) {
            x = 0;
            y++;
        }
        if (y >= h) break;

        if (has) {
            ax[i] = ox; ay[i] = oy;
            adx[i] = x; ady[i] = y;
            ox = x; oy = y;
            a[y][x]++; i++;
            if (a[y][x] % 2 == 0) {
                has = false;
            }
        } else if (a[y][x] % 2 == 1) {
            oy = y; ox = x;
            has = true;
        }

        if (y % 2 == 0) x++;
        else x--;
    }

    cout << i << endl;
    rep(j, i) {
        printf("%d %d %d %d\n", ay[j]+1, ax[j]+1, ady[j]+1, adx[j]+1);
    }
    return 0;
}