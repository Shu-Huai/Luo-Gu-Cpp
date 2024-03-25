#include <iostream>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cin >> input;
    int count[26] = {0};
    for (int i = 0; i < input.length(); i++) {
        count[input[i] - 'a']++;
    }
    int max = 0;
    int min = 100;
    for (int i: count) {
        if (i > max) {
            max = i;
        }
        if (i != 0 && i < min) {
            min = i;
        }
    }
    if (isPrime(max - min)) {
        cout << "Lucky Word" << endl << max - min << endl;
    } else {
        cout << "No Answer" << endl << 0 << endl;
    }
    return 0;
}