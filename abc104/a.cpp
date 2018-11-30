#include<iostream>
using namespace std;

int main() {
    int r; cin >> r;
    string ans = "ABC";
    if (r >= 1200) ans = "ARC";
    if (r >= 2800) ans = "AGC";
    cout << ans << endl;
    return 0;
}