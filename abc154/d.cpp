#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, K, sum[200001], ans;

int main() {
    cin >> N >> K;
    rep(i, N) {
        cin >> sum[i+1];
        sum[i+1] += sum[i] + 1;
    }
    rep(i, N - K + 1) {
        ans = max(ans, sum[i + K] - sum[i]);
    }
    printf("%f\n", ans / 2.0);
}