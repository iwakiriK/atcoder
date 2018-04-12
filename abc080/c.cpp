#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, f[100][10], p[100][11], ans = -(1 << 30);
bool isOpened[10];
int Count[100];

void dfs(int cnt) {
    if (cnt == 10) {
        // check and init
        bool isZero = true;
        for (int i = 0; i < 10; i++) {
            if(isOpened[i]) isZero = false;
        }
        if (isZero) return;
        for (int i = 0; i < n; i++) {
            Count[i] = 0;
        }
        // count
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 10; j++) {
                if (!isOpened[j]) continue;
                if (f[i][j]) Count[i]++;
            }
        }
        // calc 
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += p[i][Count[i]];
        }
        ans = max(ans, sum);
    } else {
        isOpened[cnt] = false;
        dfs(cnt+1);
        isOpened[cnt] = true;
        dfs(cnt+1);
    }
}

int  main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &f[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 11; j++) {
            scanf("%d", &p[i][j]);
        }
    }
    dfs(0);
    cout << ans << endl;
    return 0;

}