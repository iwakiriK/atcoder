#include<iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int sum = A + B;
    printf(sum % 2 ? "IMPOSSIBLE" : "%d", sum / 2);
}