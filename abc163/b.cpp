#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M, A;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A;
        N -= A;
    }
    cout << max(-1, N) << endl;
}