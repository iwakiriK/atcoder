#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, ans = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if ((int)(log10(i) + 1) % 2) ans++;
    }
    cout << ans << endl;
}