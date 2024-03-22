#include <iostream>
#include <stack>

using namespace std;

int main() {
    string input;
    cin >> input;
    stack<long long> s;
    int tempIndex = -1;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '@') {
            break;
        }
        if (input[i] == '.') {
            long long number = stoll(input.substr(tempIndex + 1, i - tempIndex - 1));
            s.push(number);
            tempIndex = i;
        } else if (input[i] == '+') {
            long long right = s.top();
            s.pop();
            long long left = s.top();
            s.pop();
            s.push(left + right);
            tempIndex = i;
        } else if (input[i] == '-') {
            long long right = s.top();
            s.pop();
            long long left = s.top();
            s.pop();
            s.push(left - right);
            tempIndex = i;
        } else if (input[i] == '*') {
            long long right = s.top();
            s.pop();
            long long left = s.top();
            s.pop();
            s.push(left * right);
            tempIndex = i;
        } else if (input[i] == '/') {
            long long right = s.top();
            s.pop();
            long long left = s.top();
            s.pop();
            s.push(left / right);
            tempIndex = i;
        }
    }
    cout << s.top() << endl;
    return 0;
}