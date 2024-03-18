#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    cin >> a >> b >> c;
    double p = 0.5 * (a + b + c);
    cout << fixed << setprecision(1) << pow(p * (p - a) * (p - b) * (p - c), 0.5);
    return 0;
}