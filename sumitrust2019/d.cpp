#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, ans;
string S;

int main() {
    cin >> N >> S;
    rep(i, 1000) {
        int c[3] = {i / 100, i / 10 % 10, i % 10};
        int f = 0;
        rep(j, N) {
            if (S[j] - '0' == c[f]) f++;
            if (f == 3) {
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
}