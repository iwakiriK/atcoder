#include<iostream>
using namespace std;

int main() {
    int N, K, C;
    string S;
    cin >> N >> K >> C >> S;
    int l[K], r[K], idx = 0;
    for (int i = 0; i < N && idx < K; i++) {
        if (S[i] == 'o') {
            l[idx++] = i;
            i += C;
        }
    }
    idx = K - 1;
    for (int i = N - 1; i >= 0 && idx >= 0; i--) {
        if (S[i] == 'o') {
            r[idx--] = i;
            i -= C;
        }
    }
    for (int i = 0; i < K; i++) {
        if (l[i] == r[i]) cout << l[i]+1 << endl;
    }
}