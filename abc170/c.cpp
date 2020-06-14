#include<iostream>
using namespace std;

int main() {
    int X, N, p, ans = 0;
    cin >> X >> N;
    bool exist[102] = {};
    for (int i = 0; i < N; i++) {
        cin >> p;
        exist[p] = true;
    }
    for (int i = 0; i <= 101; i++) {
        if (!exist[i] && abs(i - X) < abs(ans - X)) ans = i;
    }
    cout << ans << endl;
}
