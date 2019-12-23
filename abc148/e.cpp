#include<iostream>
using namespace std;

int main() {
    int64_t N, ans = 0, div = 10;
    cin >> N;
    if (N % 2 == 0) {
        while (div <= N) {
            ans += N / div;
            div *= 5;
        }
    }
    cout << ans << endl;
}