#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K, d, A, ans = 0;
    cin >> N >> K;
    set<int> S;
    while (K--) {
        cin >> d;
        while (d--) {
            cin >> A;
            S.insert(A);
        }
    }
    cout << N - S.size() << endl;
}