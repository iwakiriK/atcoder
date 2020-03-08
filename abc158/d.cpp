#include<bits/stdc++.h>
using namespace std;

string S, C;
int Q, T, F;
bool rev;

int main() {
    cin >> S >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> T;
        if (T == 1) rev ^= 1;
        else {
            cin >> F >> C;
            if (rev ^ (F == 1)) {
                S.insert(0, C);
            } else {
                S += C;
            }
        }
    }
    if (rev) reverse(S.begin(), S.end());
    cout << S << endl;
}