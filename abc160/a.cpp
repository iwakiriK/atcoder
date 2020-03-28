#include<iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    puts(S[2] == S[3] && S[4] == S[5] ? "Yes" : "No");
}