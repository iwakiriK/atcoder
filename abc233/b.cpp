#include<bits/stdc++.h>
using namespace std;

int main() {
    int L, R;
    string S;
    cin >> L >> R >> S;
    reverse(S.begin() + L - 1, S.begin() + R);
    cout << S << endl;
}
