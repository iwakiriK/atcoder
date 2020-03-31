#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string S) {
    string T = S;
    reverse(S.begin(), S.end());
    return S == T;
}

int main() {
    string S;
    cin >> S;
    bool ans = isPalindrome(S) && isPalindrome(S.substr(0, S.size() / 2));
    puts(ans ? "Yes" : "No");
}