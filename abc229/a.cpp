#include<iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    cout << ((A == B || A == "##" || B == "##") ? "Yes" : "No") << endl;
}
