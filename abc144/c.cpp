#include<bits/stdc++.h>
using namespace std;

int main() {
    long N, x;
    cin >> N;
    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            x = i;
        }
    }
    cout << x + N / x - 2 << endl;
}