#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

struct UnionFind {
    int par[200000];

    UnionFind(int N) {
        rep(i, N) par[i] = i;
    }
    int root(int x) {
        return par[x] == x ? x : par[x] = root(par[x]);
    }
    void unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return;
        par[x] = y;
    }
    bool same(int x, int y) {
        return root(x) == root(y);
    }
};

int main() {
    int N, K, L, a, b;
    cin >> N >> K >> L;
    UnionFind road(N), rail(N);
    rep(i, K) {
        cin >> a >> b;
        road.unite(a-1, b-1);
    }
    rep(i, L) {
        cin >> a >> b;
        rail.unite(a-1, b-1);
    }
    
    map<pair<int, int>, int>mp;
    pair<int, int> key[N];
    rep(i, N) {
        key[i] = make_pair(road.root(i), rail.root(i));
        mp[key[i]]++;
    }
    rep(i, N) {
        cout << mp[key[i]] << endl;
    }
}