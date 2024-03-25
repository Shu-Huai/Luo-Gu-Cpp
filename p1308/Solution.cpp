#include <iostream>

using namespace std;

int main() {
    string pattern;
    getline(cin, pattern);
    string input;
    getline(cin, input);
    for (int i = 0; i < pattern.length(); i++) {
        pattern[i] = (char) toupper(pattern[i]);
    }
    for (int i = 0; i < input.length(); i++) {
        input[i] = (char) toupper(input[i]);
    }
    pattern = ' ' + pattern + ' ';
    input = ' ' + input + ' ';
    if (input.find(pattern) == string::npos) {
        cout << -1 << endl;
    } else {
        int count = 0;
        int last = 0;
        while (input.find(pattern, last) != string::npos) {
            count++;
            last = (int) input.find(pattern, last) + 1;
        }
        int first = (int) input.find(pattern);
        cout << count << " " << first << endl;
    }
    return 0;
}