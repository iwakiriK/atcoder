#include<iostream>
using namespace std;

int main() {
    int N, a, b, ans = 1;
    bool first = true, up;
    cin >> N >> a;
    for (int i = 1; i < N; i++) {
        cin >> b;
        if (a == b) continue;
        if (first) {
            up = a < b;
            first = false;
        }
        if (up && a > b || !up && a < b) {
            ans++;
            first = true;
            up = a < b;
        }
        a = b;
    }
    cout << ans << endl;
}