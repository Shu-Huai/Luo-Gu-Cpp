#include<iostream>

using namespace std;

int main() {
    string input;
    cin >> input;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '-' || i == input.length() - 1) {
            continue;
        }
        count++;
        sum += (input[i] - '0') * count;
    }
    int last = input[input.length() - 1] == 'X' ? 10 : input[input.length() - 1] - '0';
    if (sum % 11 == last) {
        cout << "Right" << endl;
    } else {
        for (int i = 0; i < input.length() - 1; i++) {
            cout << input[i];
        }
        if (sum % 11 == 10) {
            cout << 'X' << endl;
        } else {
            cout << (sum % 11) << endl;
        }
    }
    return 0;
}