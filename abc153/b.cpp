#include<iostream>
using namespace std;

int main() {
    int H, N, A;
    cin >> H >> N;
    for (int i = 0; i < N; i++) {
        cin >> A;
        H -= A;
    }
    puts(H <= 0 ? "Yes" : "No");
}