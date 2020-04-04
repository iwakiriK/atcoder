#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    queue<int64_t> Q;
    for (int i = 1; i <= 9; i++) Q.push(i);
    for (int i = 1; i < N; i++) {
        int64_t x = Q.front();
        int d = x % 10;
        Q.pop();
        if (d) Q.push(x * 10 + d - 1);
        Q.push(x * 10 + d);
        if (d < 9) Q.push(x * 10 + d + 1);
    }
    cout << Q.front() << endl;
}