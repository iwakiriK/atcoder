#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, a[100000], l;
int64_t K, ans, sum;

int main() {
    cin >> N >> K;
    rep(i, N) cin >> a[i];
    
    rep(r, N) {
        sum += a[r];
        while (sum >= K) {
            ans += N - r;
            sum -= a[l++];
        }
    }
    cout << ans << endl;
}