#include<iostream>
using namespace std;

int main() {
    int64_t N, K;
    cin >> N >> K;
    int A[N+1], B[N+1] = {};
    for (int i = 0; i < N; i++) cin >> A[i+1];
    
    int now = 1, step = 0;
    bool divided = false;
    for (int64_t i = K; i > 0; i--) {
        int next = A[now];
        if ((next == 1 || B[next] != 0) && !divided) {
            divided = true;
            i %= B[now] - B[next] + 1;
        }
        if (i != 0) now = next;
        B[now] = ++step;
    }
    cout << now << endl;
}