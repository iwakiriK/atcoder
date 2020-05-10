#include<iostream>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    T.pop_back();
    puts(S == T ? "Yes" : "No");
}