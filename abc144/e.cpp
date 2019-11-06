#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

int main() {
    ll N, K;
    cin >> N >> K;
    ll A[N], F[N];
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> F[i];
    sort(A, A + N);
    sort(F, F + N, greater<ll>());

    ll l = -1, r = 10e12;
    while (l + 1 < r) {
        ll mid = (l + r) / 2, sum = 0;
        rep(i, N) {
            sum += max(A[i] - mid / F[i], 0ll);
        }
        if (sum > K) l = mid;
        else r = mid;
    }
    cout << r << endl;
}