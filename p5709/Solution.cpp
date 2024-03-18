#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m = 0;
    int t = 0;
    int s = 0;
    cin >> m >> t >> s;
    if (t == 0) {
        cout << 0 << endl;
        return 0;
    }
    int now = m - (int) ceil(s * 1.0 / t);
    if (now < 0) {
        now = 0;
    }
    cout << now << endl;
    return 0;
}