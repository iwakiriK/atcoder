#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    char grid[100][100];
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            grid[i][j] = i < 50 ? '#' : '.';
        }
    }
    for (int i = 0; i < a - 1; i++) {
        grid[i/50*2][i%50*2] = '.';
    }
    for (int i = 0; i < b - 1; i++) {
        grid[51+i/50*2][i%50*2] = '#';
    }
    cout << 100 << " " << 100 << endl;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    
    return 0;
}