#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int s = 0;
    int v = 0;
    cin >> s >> v;
    int time = (int) ceil(s * 1.0 / v) + 10;
    int hour = time / 60;
    int min = time % 60;
    min = (60 - min) % 60;
    hour = 7 - hour;
    if (hour < 0) {
        hour += 24;
    }
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << min;
    return 0;
}