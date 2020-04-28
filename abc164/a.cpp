#include<iostream>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    puts(W >= N ? "unsafe" : "safe");
}