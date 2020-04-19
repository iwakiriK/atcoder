#include<iostream>
using namespace std;

int N, A, cnt[200000];

int main() {
    cin >> N;
    for (int i = 1; i < N; i++) {
        cin >> A;
        cnt[A-1]++;
    }
    for (int i = 0; i < N; i++) {
        cout << cnt[i] << endl;
    }
}