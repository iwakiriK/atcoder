#include<iostream>
using namespace std;

int main() {
    string S, T, U;
    int A, B;
    cin >> S >> T >> A >> B >> U;
    if (S == U) A--;
    else B--;
    printf("%d %d\n", A, B);
}