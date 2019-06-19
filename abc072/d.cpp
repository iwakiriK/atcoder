#include<iostream>
using namespace std;

int main() {
    int N, p, ans = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> p;
        if (p == i) {
            ans++; i++;
            cin >> p;
        }
    }
    cout << ans << endl;
}