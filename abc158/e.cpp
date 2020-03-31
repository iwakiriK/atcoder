#include<iostream>
using namespace std;

int N, P, cur, ten = 1, cnt[10000];
string S;
int64_t ans;

int main() {
    cin >> N >> P >> S;
    if (10 % P == 0) {
        for (int i = 0; i < N; i++) {
            if ((S[i] - '0') % P == 0) {
                ans += i + 1;
            }
        }
    } else {
        cnt[0] = 1;
        for (int i = N - 1; i >= 0; i--) {
            (cur += (S[i] - '0') * ten) %= P;
            ans += cnt[cur]++;
            ten = ten * 10 % P;
        }
    }
    cout << ans << endl;
}