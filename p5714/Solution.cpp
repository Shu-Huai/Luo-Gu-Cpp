#include<iostream>

using namespace std;

int main() {
    double m = 0;
    double h = 0;
    cin >> m >> h;
    double bmi = m / h / h;
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 24) {
        cout << "Normal" << endl;
    } else {
        cout << bmi << endl << "Overweight" << endl;
    }
    return 0;
}