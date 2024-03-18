#include <iostream>

using namespace std;

int main() {
    int x = 0;
    cin >> x;
    bool isEven = x % 2 == 0;
    bool isGood = x > 4 && x <= 12;
    cout << (isEven && isGood) << " " << (isEven || isGood) << " " << (isEven ^ isGood) << " " << (!isEven && !isGood);
    return 0;
}