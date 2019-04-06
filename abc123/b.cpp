#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int A[5], ans = 1e9;
    rep(i, 5) cin >> A[i];
    do {
        int sum = 0;
        rep(i, 5) {
            while (sum % 10 != 0) sum++;
            sum += A[i];
        }
        ans = min(ans, sum);
    } while (next_permutation(A, A + 5));
    
    cout << ans << endl;
}
