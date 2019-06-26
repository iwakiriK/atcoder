#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    pair<int, int> BA[N];
    for (int i = 0; i < N; i++) {
        cin >> BA[i].second >> BA[i].first;
    }
    sort(BA, BA + N);
    string ans = "Yes";
    int now = 0;
    for (auto v : BA) {
        now += v.second;
        if (now > v.first) ans = "No";
    }
    cout << ans << endl;
}