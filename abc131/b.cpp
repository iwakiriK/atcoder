#include<iostream>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    int L = A, R = A + N - 1, eat = 0;
    if (L > 0) eat = L;
    if (R < 0) eat = R;
    cout << (R + L) * (R - L + 1) / 2 - eat << endl;
}