#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, m, a, b, road[50];

int main() {
    cin >> n >> m;
    rep(i, m) {
        cin >> a >> b;
        road[a-1]++;
        road[b-1]++;
    }
    rep(i, n) {
        cout << road[i] << endl;
    }
}