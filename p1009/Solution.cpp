#include<iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int resultLength = 100;
    int factorial[resultLength];
    int result[resultLength];
    for (int i = 0; i < resultLength; i++) {
        result[i] = 0;
        factorial[i] = 0;
    }
    result[resultLength - 1] = 1;
    factorial[resultLength - 1] = 1;
    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int j = resultLength - 1; j >= 0; j--) {
            factorial[j] = factorial[j] * i + carry;
            carry = factorial[j] / 10;
            factorial[j] = factorial[j] % 10;
        }
        carry = 0;
        for (int j = resultLength - 1; j >= 0; j--) {
            result[j] = result[j] + factorial[j] + carry;
            carry = result[j] / 10;
            result[j] = result[j] % 10;
        }
    }
    int start = 0;
    for (int i = 0; i < resultLength; i++) {
        if (result[i] != 0) {
            start = i;
            break;
        }
    }
    for (int i = start; i < resultLength; i++) {
        cout << result[i];
    }
    cout << endl;
    return 0;
}