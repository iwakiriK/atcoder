#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int m = stoi(s.substr(5, 2));
    cout << (m > 4 ? "TBD" : "Heisei") << endl;
}