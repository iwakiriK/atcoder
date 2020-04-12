#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int64_t ans = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 3 && i % 5) {
            ans += i;
        }
    }
    cout << ans << endl;
}