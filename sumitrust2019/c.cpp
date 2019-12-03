#include<iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    printf("%d\n", X % 100 <= X / 100 * 5);
}