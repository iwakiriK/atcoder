#include<iostream>
using namespace std;

int main() {
    long N, A, sum = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A;
        sum += A;
    }
    puts(sum % 2 ? "NO" : "YES");
}