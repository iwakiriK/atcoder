#include<iostream>
using namespace std;

const string WED[7] = {"SAT","FRI","THU","WED","TUE","MON","SUN"};

int main() {
    string S;
    cin >> S;
    for (int i = 0; i < 7; i++) {
        if (WED[i] == S) cout << i+1 << endl;
    }
}