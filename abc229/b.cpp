#include<iostream>
using namespace std;

int main() {
    int64_t A, B;
    cin >> A >> B;
    string ans = "Easy";
    while (A) {
        if (A % 10 + B % 10 > 9) ans = "Hard";
        A /= 10; B /= 10;
    }
    cout << ans << endl;
}
