#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N, M, A;
    cin >> N >> M;
    priority_queue<int> pq;
    long ans = 0;
    rep(i, N) {
        cin >> A;
        pq.push(A);
        ans += A;
    }
    rep(i, M) {
        int X = pq.top();
        pq.pop();
        pq.push(X / 2);
        ans -= X - X / 2;
    }
    cout << ans << endl;
}