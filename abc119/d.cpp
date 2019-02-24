#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
using namespace std;

const int LIM = 100000;
int A, B, Q;
ll s[LIM], t[LIM], x;

int main(){
    cin >> A >> B >> Q;
    rep(i, A) cin >> s[i];
    rep(i, B) cin >> t[i];
    rep(i, Q){
    	cin >> x;
    	ll ans = 1e18;
    	rep(j, 2){
            int spos = max(0, min((int)(lower_bound(s, s + A, x) - s - j), A - 1));
    		rep(k, 2){
                int tpos = max(0, min((int)(lower_bound(t, t + B, x) - t - k), B - 1));
                ans = min(ans, min(abs(x - s[spos]), abs(x - t[tpos])) + abs(s[spos] - t[tpos]));
    		}
    	}
    	cout << ans << endl;
    }
    return 0;
}