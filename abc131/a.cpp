#include<iostream>
using namespace std;

int main() {
    string S, ans = "Good";
    cin >> S;
    for (int i = 0; i < 3; i++) {
        if (S[i] == S[i+1]) ans = "Bad";
    }
    cout << ans << endl;
}