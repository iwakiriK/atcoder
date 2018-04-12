#include <bits/stdc++.h>
using namespace std;

const int LIMIT = 200002;
int N, C, s[100000], t[100000], c[100000];
int imos[LIMIT], sm[LIMIT], ans;

int main() {
    cin >> N >> C;
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &s[i], &t[i], &c[i]);
    }
    for (int i = 1; i <= C; i++) {
        for (int j = 0; j < LIMIT; j++) imos[j] = 0;
        for (int j = 0; j < N; j++) if(c[j] == i) imos[s[j]*2-1]++, imos[t[j]*2+1]--;
        for (int j = 1; j < LIMIT; j++) imos[j] += imos[j-1];
        for (int j = 0; j < LIMIT; j++) if(imos[j]) sm[j]++;
    }
    for (int i = 0; i < LIMIT; i++) {
        ans = max(ans, sm[i]);
    }
    cout << ans << endl;
    return 0;
}