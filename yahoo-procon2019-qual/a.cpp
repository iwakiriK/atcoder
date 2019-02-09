#include<iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    cout << (k * 2 - 1 > n ? "NO" : "YES") << endl;
}