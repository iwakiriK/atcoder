#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int N, M, ans = 1;

int main() {
    cin >> N >> M;
    for (int a = 1; a * a <= M; a++) {
        if (M % a != 0) continue;
        int b = M / a;
        if ((ll)a * N <= M) ans = max(ans, a);
        if ((ll)b * N <= M) ans = max(ans, b);
    }
    cout << ans << endl;
    
    return 0;
}