#include<bits/stdc++.h>
using namespace std;

int N, M, A[100], sum;

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }
    sort(A, A + N);
    puts(A[N-M] * 4 * M >= sum ? "Yes" : "No");
}