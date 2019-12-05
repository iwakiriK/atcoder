#include<iostream>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    string T = S.substr(0, N / 2);
    cout << (S == T + T ? "Yes" : "No") << endl;
}