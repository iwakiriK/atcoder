#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, A[100000], t;
int64_t sum;

int main() {
    cin >> N;
    rep(i, N) cin >> A[i];

    sort(A, A + N);
    rep(i, N) {
        if (A[i] > sum * 2) {
            t = i;
        }
        sum += A[i];
    }
    cout << N - t << endl;
}