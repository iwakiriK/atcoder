#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MAX_N = 200001;
int N, A[MAX_N], cnt[MAX_N];
int64_t ans;

int main() {
    cin >> N;
    rep(i, N) {
        cin >> A[i];
        ans += cnt[A[i]];
        cnt[A[i]]++;
    }
    rep(i, N) {
        cout << ans - cnt[A[i]] + 1 << endl;
    }
}