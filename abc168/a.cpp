#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    N %= 10;
    if (N == 3) puts("bon");
    else if (N == 0 || N == 1 || N == 6 || N == 8) puts("pon");
    else puts("hon");
}