#include<iostream>
using namespace std;

int main() {
    int W, H, x, y;
    cin >> W >> H >> x >> y;
    printf("%lf %d\n", (double)W * H / 2, x + x == W && y + y == H);
}