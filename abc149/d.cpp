#include<iostream>
using namespace std;

int main() {
    int N, K, R, S, P, ans = 0;
    string T;
    cin >> N >> K >> R >> S >> P >> T;
    for (int i = 0; i < N; i++) {
        if (i < K || T[i-K] != T[i]) {
            if (T[i] == 'r') ans += P;
            if (T[i] == 's') ans += R;
            if (T[i] == 'p') ans += S;
        } else {
            T[i] = '-';
        }
    }
    cout << ans << endl;
}