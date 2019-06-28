#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int dif = max({A, B, C}) * 3 - (A + B + C);
    if (dif % 2) dif += 4;
    cout << dif / 2 << endl;
}