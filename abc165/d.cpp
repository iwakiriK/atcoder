#include<iostream>
using namespace std;

int main() {
    int64_t A, B, N;
    cin >> A >> B >> N;
    int64_t x = min(B - 1, N);
    cout << A * x / B - A * (x / B) << endl;
}