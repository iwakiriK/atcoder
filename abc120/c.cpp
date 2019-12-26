#include<bits/stdc++.h>
#define cnt(s,k) count(s.begin(),s.end(),k)
using namespace std;

int main() {
    string S;
    cin >> S;
    cout << min(cnt(S, '0'), cnt(S, '1')) * 2 << endl;
}