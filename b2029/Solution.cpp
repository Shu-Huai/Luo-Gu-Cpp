#include<iostream>
#include <cmath>

using namespace std;

int main() {
    int h = 0;
    int r = 0;
    cin >> h >> r;
    double v = h * 3.14 * r * r;
    cout << ceil(20000 / v);
    return 0;
}