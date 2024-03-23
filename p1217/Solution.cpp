#include<iostream>
#include <cmath>

using namespace std;

bool isCircle(long long number) {
    long long a = number;
    long long b = 0;
    while (number > 0) {
        b = b * 10 + number % 10;
        number /= 10;
    }
    return a == b;
}

bool isPrime(long long number) {
    for (int i = 2; i <= pow(number, 0.5); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isCircle(i) && isPrime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}