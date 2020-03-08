#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    for (int i = 0; i < 1010; i++) {
        if (floor(i * 0.08) == A && floor(i * 0.10) == B) {
            cout << i << endl;
            return 0;
        }
    }
    puts("-1");
}