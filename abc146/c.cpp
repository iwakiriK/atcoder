#include<iostream>
using namespace std;

int main() {
    int64_t A, B, X;
    cin >> A >> B >> X;
    int l = 0, r = 1e9 + 1;
    while (l + 1 < r) {
        int N = (r + l) / 2;
        int d = to_string(N).size();
        if (A * N + B * d > X) r = N;
        else l = N;
    }
    cout << l << endl;
}