#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

struct UnionFind {
    vector<int> par; // parent
    UnionFind(int N) {
        par = vector<int>(N, -1); // negative num is size
    }
    int root(int x) {
        return par[x] < 0 ? x : par[x] = root(par[x]);
    }
    int size(int x) {
        return -par[root(x)];
    }
    bool same(int x, int y) {
        return root(x) == root(y);
    }
    void unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return;

        if (size(x) < size(y)) swap(x, y);
        par[x] += par[y];
        par[y] = x;
    }
};

int main() {
    int N, M;
    cin >> N >> M;
    int a[M], b[M];
    rep(i, M) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }
    
    UnionFind Uni(N);
    vector<ll> ans(M);
    ans[M-1] = (ll)N * (N - 1) / 2;
    for (int i = M - 1; i >= 1; i--) {
        ans[i-1] = ans[i];
        if (!Uni.same(a[i], b[i])) {
            ans[i-1] -= (ll)Uni.size(a[i]) * Uni.size(b[i]);
            Uni.unite(a[i], b[i]);
        }
    }
    rep(i, M) cout << ans[i] << endl;
}