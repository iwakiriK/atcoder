#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100000;
bool isPrime[MAX_N+1];
int sum[MAX_N+1], q, l, r;
     
int main() {
    // Sieve of Eratosthenes
    for (int i = 0; i <= MAX_N; i++) {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= sqrt(MAX_N); i++) {
        for (int j = i + i; j <= MAX_N; j += i) {
            isPrime[j] = false;
        }
    }
    // sum
    for (int i = 3; i <= MAX_N; i += 2) {
        if (isPrime[i] && isPrime[(i+1)/2]) {
            sum[i]++;
        }
    }
    for (int i = 3; i <= MAX_N; i++) sum[i] += sum[i-1];
    // input and output
    cin >> q;
    while (q--) {
        scanf("%d %d", &l, &r);
        cout << sum[r] - sum[l-1] << endl;
    }
    
    return 0;
}