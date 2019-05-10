#include<iostream>
using namespace std;

int n, ans;

int main() {
    cin >> n;
    while (n) {
        ans += n % 10;
        n /= 10;
    }
    cout << (ans == 1 ? 10 : ans) << endl;
}