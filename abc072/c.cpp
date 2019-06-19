#include<bits/stdc++.h>
using namespace std;

const int LIM = 100001;
int N, a, cnt[LIM];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a;
        if (a) cnt[a-1]++;
        cnt[a]++; cnt[a+1]++;
    }
    cout << *max_element(cnt, cnt + LIM) << endl;
}