#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    cout << max(0, (Y - X + 9) / 10) << endl;
}
