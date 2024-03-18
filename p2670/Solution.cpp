#include<iostream>

using namespace std;

void add(char result[100][100], int i, int j) {
    if (i >= 0 && j >= 0 && i <= 99 && j <= 99) {
        if (result[i][j] != '*') {
            result[i][j]++;
        }
    }
}

int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    char result[100][100] = {0};
    char input[100][100] = {0};
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        for (int j = 0; j < m; j++) {
            input[i][j] = temp[j];
            result[i][j] = '0';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (input[i][j] == '*') {
                result[i][j] = '*';
                add(result, i - 1, j);
                add(result, i + 1, j);
                add(result, i - 1, j - 1);
                add(result, i - 1, j + 1);
                add(result, i, j - 1);
                add(result, i + 1, j - 1);
                add(result, i + 1, j + 1);
                add(result, i, j + 1);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j];
        }
        cout << endl;
    }
    return 0;
}