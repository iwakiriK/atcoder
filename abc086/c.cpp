#include<iostream>
using namespace std;

int N, t, x, y, nx, ny, nt;

int main() {
    cin >> N;
    string ans = "Yes";
    for (int i = 0; i < N; i++) {
        cin >> t >> x >> y;
        int dist = abs(nx - x) + abs(ny - y);
        int grace = t - nt;
        if (dist > grace || (dist - grace) % 2) ans = "No";
        nx = x; ny = y; nt = t;
    }
    cout << ans << endl;
}