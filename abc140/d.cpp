#include<iostream>
using namespace std;

int N, K, a;
string S;

int main() {
    cin >> N >> K >> S;
    for (int i = 1; i < N; i++) {
        if (S[i] == S[i-1]) a++;
    }
    cout << min(2 * K + a, N - 1) << endl;
}