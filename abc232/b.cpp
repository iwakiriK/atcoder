#include<iostream>
using namespace std;

const int M = 26;

int main() {
    string S, T;
    cin >> S >> T;

    int K = (T[0] - S[0] + M) % M;    
    string ans = "Yes";
    for (int i = 0; i < S.size(); i++) {
        char ch = ((S[i] - 'a') + K) % M + 'a';
        if (T[i] != ch) ans = "No";
    }
    cout << ans << endl;
}
