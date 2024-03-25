#include <iostream>

using namespace std;

int main() {
    int i = 0;
    cin >> i;
    char op = 0;
    for (int j = 0; j < i; j++) {
        string inputOp;
        cin >> inputOp;
        int a;
        int b;
        if (inputOp[0] == 'a' || inputOp[0] == 'b' || inputOp[0] == 'c' || inputOp[0] == 'd') {
            op = inputOp[0];
            cin >> a >> b;
        } else {
            a = stoi(inputOp);
            cin >> b;
        }
        string output;
        switch (op) {
            case 'a':
                output = to_string(a) + "+" + to_string(b) + "=" + to_string(a + b);
                break;
            case 'b':
                output = to_string(a) + "-" + to_string(b) + "=" + to_string(a - b);
                break;
            case 'c':
                output = to_string(a) + "*" + to_string(b) + "=" + to_string(a * b);
                break;
            case 'd':
                output = to_string(a) + "/" + to_string(b) + "=" + to_string(a / b);
                break;
            default:
                break;
        }
        cout << output << endl;
        cout << output.length() << endl;
    }
}