#include<iostream>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    cout << max(min(A, K), 0) - max(K - A - B, 0) << endl;
}