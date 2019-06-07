#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, C, K, T[100000], departure, people, ans;

int main() {
    cin >> N >> C >> K;
    rep(i, N) cin >> T[i];

    sort(T, T + N);
    rep(i, N) {
        if (T[i] > departure || people >= C) {
            departure = T[i] + K;
            people = 1;
            ans++;
        } else {
            people++;
        }
    }
    cout << ans << endl;
}