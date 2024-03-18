#include<iostream>

using namespace std;

int main() {
    string input;
    cin >> input;
    for (int i = (int) input.length() - 1; i >= 0; i--) {
        cout << input[i];
    }
    cout << endl;
    return 0;
}