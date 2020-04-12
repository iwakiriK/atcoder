#include<iostream>
using namespace std;

int64_t N, r, g, b, ans;
string S;

int main() {
    cin >> N >> S;
    for (char c: S) {
        if (c == 'R') r++;
        if (c == 'G') g++;
        if (c == 'B') b++;
    }
    ans = r * g * b;
    for (int i = 0; i < N; i++) {
        for (int j = 1; i + j * 2 < N; j++) {
            if (S[i] != S[i+j] && S[i+j] != S[i+j*2] && S[i] != S[i+j*2]) {
                ans--;
            }
        }
    }
    cout << ans << endl;
}