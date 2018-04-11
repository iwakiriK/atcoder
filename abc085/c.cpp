#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int N, Y, x = -1, y = -1, z = -1;

int main() {
    cin >> N >> Y;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; i + j <= N; j++) {
            if (10000 * i + 5000 * j + 1000 * (N - i - j) == Y) {
                x = i, y = j, z = (N - i - j);
            }
        }
    }
    cout << x << " " << y << " " << z << endl;
    
    return 0;
}