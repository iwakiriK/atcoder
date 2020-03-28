#include<iostream>
using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    int cnt[N] = {};
    for (int i = 1; i < N; i++) {
        for (int j = i + 1; j <= N; j++) {
            int cur = min(j - i, abs(X - i) + abs(Y - j) + 1);
            cnt[cur]++;
        }
    }
    for (int i = 1; i < N; i++) {
        cout << cnt[i] << endl;
    }
}