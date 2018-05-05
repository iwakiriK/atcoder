#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int LIMIT = 55555;
bool isPrime[LIMIT+1];

int main() {
    // Sieve of Eratosthenes
    for (int i = 0; i <= LIMIT; i++) isPrime[i] = true;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= sqrt(LIMIT); i++) {
        for (int j = i + i; j <= LIMIT; j += i) {
            isPrime[j] = false;
        }
    }
    // output
    int n, num = 1, count = 0;
    cin >> n;
    while(true) {
        num += 10;
        if (isPrime[num]) {
            if (count) cout << " ";
            cout << num;
            if (++count == n) break;
        }
    }
    cout << endl;
    
    return 0;
}