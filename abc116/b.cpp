#include<bits/stdc++.h>
using namespace std;

int main() {
    // input, init
    map<int, bool> used;
    int s;
    cin >> s;
    used[s] = true;
    
    // simulation
    int a = s, cnt = 1;
    while (true) {
        cnt++;
        if (a % 2 == 0) {
            a /= 2;
        } else {
            a = a * 3 + 1;
        }
        
        if (used[a]) break;
        used[a] = true;
    }
    cout << cnt << endl;

    return 0;
}