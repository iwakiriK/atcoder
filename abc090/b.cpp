#include<iostream>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

int a, b, ans;

int main() {
    cin >> a >> b;
    REP(i, a, b+1) {
        string now = to_string(i);
        if (now[0] == now[4] && now[1] == now[3]) ans++;
    }
    cout << ans << endl;
}