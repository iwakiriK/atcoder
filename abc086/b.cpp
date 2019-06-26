#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int num = stoi(a + b);
    cout << (int(sqrt(num)) == sqrt(num) ? "Yes" : "No") << endl;
}