#include<iostream>
using namespace std;

int main() {
    int N, X, L, D = 0, ans = 1;
    cin >> N >> X;
    for (int i = 0; i < N; i++) {
        cin >> L;
        D += L;
        if (D <= X) ans++;
    }
    cout << ans << endl;
}