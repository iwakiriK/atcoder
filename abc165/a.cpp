#include<iostream>
using namespace std;

int main() {
    int K, A, B;
    cin >> K >> A >> B;
    puts(B / K * K < A ? "NG" : "OK");
}