#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int main() {
    int N;
    cin >> N;
    long A[N], x = 0;
    rep(i, N) {
        cin >> A[i];
        x += A[i];
    }

    for (int i = 1; i < N; i += 2) {
        x -= 2 * A[i];
    }
    cout << x;
    rep(i, N-1) {
        x = 2 * A[i] - x;
        cout << " " << x;
    }
    puts("");
}