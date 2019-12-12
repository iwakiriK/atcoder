#include<iostream>
using namespace std;

int N, B, pre = 1e9, ans;

int main() {
    cin >> N;
    for (int i = 1; i < N; i++) {
        cin >> B;
        ans += min(pre, B);
        pre = B;
    }
    ans += pre;
    cout << ans << endl;
}