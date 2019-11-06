#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ans = "No";
    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; b++) {
            if (a * b == n) ans = "Yes";
        }
    }
    cout << ans << endl;
}