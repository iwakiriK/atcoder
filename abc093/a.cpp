#include<iostream>
using namespace std;

int main() {
    char a, b, c;
    cin >> a >> b >> c;
    puts(a != b && b != c && c != a ? "Yes" : "No");
}