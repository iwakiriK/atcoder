#include<bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,(n))
typedef long long ll;
using namespace std;

int main() {
    int w, h, n, x, y, a;
    cin >> w >> h >> n;
    
    int minX = 0, maxX = w, minY = 0, maxY = h;
    rep(i, n) {
        cin >> x >> y >> a;
        if (a == 1) minX = max(minX, x);
        if (a == 2) maxX = min(maxX, x);
        if (a == 3) minY = max(minY, y);
        if (a == 4) maxY = min(maxY, y);
    }
    int width  = max(maxX - minX, 0);
    int height = max(maxY - minY, 0);
    cout << width * height << endl;
}