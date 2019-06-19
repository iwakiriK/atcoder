#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, a[100000];

int64_t calc(int sign) {
    int64_t ret = 0, sum = 0;
    rep(i, n) {
        sum += a[i];
        if (sum * sign <= 0) {
            ret += abs(sum) + 1;
            sum = sign;
        }
        sign *= -1;
    }
    return ret;
}

int main() {
    cin >> n;
    rep(i, n) cin >> a[i];
    cout << min(calc(1), calc(-1)) << endl;
}