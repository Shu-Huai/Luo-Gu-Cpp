#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int side[3] = {0};
    cin >> side[0] >> side[1] >> side[2];
    sort(side, side + 3);
    if (side[0] + side[1] <= side[2]) {
        cout << "Not triangle" << endl;
        return 0;
    }
    if (side[0] * side[0] + side[1] * side[1] == side[2] * side[2]) {
        cout << "Right triangle" << endl;
    }
    if (side[0] * side[0] + side[1] * side[1] > side[2] * side[2]) {
        cout << "Acute triangle" << endl;
    }
    if (side[0] * side[0] + side[1] * side[1] < side[2] * side[2]) {
        cout << "Obtuse triangle" << endl;
    }
    if (side[0] == side[1] || side[1] == side[2] || side[0] == side[2]) {
        cout << "Isosceles triangle" << endl;
    }
    if (side[0] == side[1] && side[1] == side[2]) {
        cout << "Equilateral triangle" << endl;
    }
}