#include<iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    puts(S[0] == '7' || S[1] == '7' || S[2] == '7' ? "Yes" : "No");
}