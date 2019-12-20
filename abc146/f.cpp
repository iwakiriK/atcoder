#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    string S;
    cin >> N >> M >> S;

    int idx = N;
    vector<int> ans;
    while (idx != 0) {
        for (int move = min(M, idx); move >= 0; move--) {
            if (move == 0) {
                cout << -1 << endl;
                return 0;
            }

            if (S[idx - move] == '0') {
                ans.push_back(move);
                idx -= move;
                break;
            }
        }
    }

    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << (i ? " " : "\n");
    }
}