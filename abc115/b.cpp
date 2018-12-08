#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int n, num, sum, Max;

int main() {
    cin >> n;
    rep(i, n) {
        cin >> num;
        sum += num;
        Max = max(Max, num);
    }
    sum -= Max / 2;
    cout << sum << endl;

    return 0;
}