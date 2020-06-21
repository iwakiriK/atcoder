#include<iostream>
using namespace std;

int main() {
    string ans;
    int64_t N;
    cin >> N;
    while (N--) {
        ans = (char)(N % 26 + 'a') + ans;
        N /= 26;
    }
    cout << ans << endl;
}