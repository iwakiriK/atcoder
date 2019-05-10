#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string ans = "Possible";
    if (a % 3 && b % 3 && (a + b) % 3) {
        ans = "Impossible";
    }
    cout << ans << endl;
}