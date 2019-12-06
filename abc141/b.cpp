#include<iostream>
using namespace std;

int main() {
    string S, ans = "Yes";
    cin >> S;
    for (int i = 0; i < S.size(); i++) {
        if ((i % 2 && S[i] == 'R') || (i % 2 == 0 && S[i] == 'L')) {
            ans = "No";
        }
    }
    cout << ans << endl;
}