#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int h, w, n, a, squares[100][100], x, y;
bool isRightward = true;

int main() {
    cin >> h >> w >> n;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        while (a--) {
            squares[y][x] = i;
            if (isRightward) {
                x++;
                if (x == w) {
                    x = w - 1;
                    y++;
                    isRightward = false;
                }
            } else {
                x--;
                if (x == -1) {
                    x = 0;
                    y++;
                    isRightward = true;
                }
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (j) cout << " ";
            cout << squares[i][j];
        }
        cout << endl;
    }

    return 0;
}