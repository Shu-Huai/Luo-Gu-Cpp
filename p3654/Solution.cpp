#include<iostream>

using namespace std;

int main() {
    int r = 0;
    int c = 0;
    int k = 0;
    cin >> r >> c >> k;
    char location[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> location[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c - k + 1; j++) {
            bool flag = true;
            for (int l = j; l < j + k; l++) {
                if (location[i][l] == '#') {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                count++;
            }
        }
    }
    for (int i = 0; i < r - k + 1; i++) {
        for (int j = 0; j < c; j++) {
            bool flag = true;
            for (int l = i; l < i + k; l++) {
                if (location[l][j] == '#') {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                count++;
            }
        }
    }
    if (k == 1) {
        cout << count / 2 << endl;
    } else {
        cout << count << endl;
    }
    return 0;
}