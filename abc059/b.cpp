#include<iostream>
using namespace std;

int main() {
    string A, B, ans = "EQUAL";
    cin >> A >> B;
    if (A.size() == B.size()) {
        if (A > B) ans = "GREATER";
        if (A < B) ans = "LESS";
    } else {
        if (A.size() > B.size()) ans = "GREATER";
        if (A.size() < B.size()) ans = "LESS";
    }
    cout << ans << endl;
}