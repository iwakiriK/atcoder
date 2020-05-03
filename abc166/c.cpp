#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, M, ans = 0;
    cin >> N >> M;
    int H[N], highest[N] = {};
    rep(i, N) cin >> H[i];
    rep(i, M) {
        int A, B;
        cin >> A >> B;
        A--; B--;
        highest[A] = max(highest[A], H[B]);
        highest[B] = max(highest[B], H[A]);
    }
    
    rep(i, N) {
        if (highest[i] < H[i]) ans++;
    }
    cout << ans << endl;
}