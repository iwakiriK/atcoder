#include<iostream>
using namespace std;

string S;
int ans;

int main() {
    cin >> S;
    for (int i = 0; i < S.size() / 2; i++) {
        if (S[i] != S[S.size()-1-i]) ans++;
    }
    cout << ans << endl;
}