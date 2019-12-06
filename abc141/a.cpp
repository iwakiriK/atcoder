#include<iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    if (S[0] == 'C') puts("Rainy");
    else if (S[0] == 'R') puts("Sunny");
    else puts("Cloudy");
}