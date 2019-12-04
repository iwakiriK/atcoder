#include<iostream>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    for (char &ch: S) {
        ch = (ch - 'A' + N) % 26 + 'A';
    }
    cout << S << endl;
}