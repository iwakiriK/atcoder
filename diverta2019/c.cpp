#include<iostream>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, ans, numA, numB, numBA;

int main() {
    cin >> N;
    string s;
    rep(i, N) {
        cin >> s;
        if (s[0] == 'B' && s[s.size()-1] == 'A') numBA++;
        else if (s[0] == 'B') numB++;
        else if (s[s.size()-1] == 'A') numA++;
        rep(j, s.size() - 1) {
            if (s[j] == 'A' && s[j+1] == 'B') ans++;
        }
    }
    ans += numBA + min(numA, numB);
    if (numBA && numA + numB == 0) ans--;
    cout << ans << endl;
}