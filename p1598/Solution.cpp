#include <iostream>

using namespace std;

int main() {
    int count[26] = {0};
    for (int i = 0; i < 4; i++) {
        string input;
        getline(cin, input);
        for (int j = 0; j < input.length(); j++) {
            if (input[j] >= 'A' && input[j] <= 'Z') {
                count[input[j] - 'A']++;
            }
        }
    }
    int max = 0;
    for (int i: count) {
        if (i > max) {
            max = i;
        }
    }
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 26; j++) {
            if (count[j] + i >= max) {
                cout << "*";
            } else {
                cout << " ";
            }
            if (j != 25) {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < 26; i++) {
        cout << char(i + 'A');
        if (i != 25) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;

}