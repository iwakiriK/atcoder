#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int R, G, B, N, ans;

int main() {    
    cin >> R >> G >> B >> N;
    rep(r, N+1) {
        rep(g, N+1) {
            int rem = N - R * r - G * g;
            if (rem < 0) break;
            if (rem % B != 0) continue;
            ans++;
        }
    }
    cout << ans << endl;
}