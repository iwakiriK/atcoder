#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int X = ceil(N / 1.08);
    if (floor(X * 1.08) == N) cout << X << endl;
    else cout << ":(" << endl;
}