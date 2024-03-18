#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double t = 0;
    int n = 0;
    cin >> t >> n;
    cout << fixed << setprecision(3) << t / n << endl << n * 2;
    return 0;
}