#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N;
    set<int> S;
    while(cin >> A) S.insert(A);
    puts(S.size() == N ? "YES" : "NO");
}