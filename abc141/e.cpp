#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

int N, ans;

void Zalgo(string S) {
    int i = 1, j = 0, len = S.size();
    vector<int> A(len);
    while (i < len) {
        while (i + j < len && S[j] == S[i+j]) j++;
        A[i] = j;
        if (j == 0) {
            i++;
            continue;
        }
        int k = 1;
        while (i + k < len && k + A[k] < j) A[i+k] = A[k], k++;
        i += k;
        j -= k;
    }

    rep(i, len) ans = max(ans, min(i, A[i]));
}

int main() {
    string S;
    cin >> N >> S;
    rep(i, N) Zalgo(S.substr(i));
    cout << ans << endl;
}