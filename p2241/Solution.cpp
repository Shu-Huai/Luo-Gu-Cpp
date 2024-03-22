#include<iostream>

using namespace std;

int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    long long squareCount = 0;
    long long rectangleCount = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (i == j) {
                squareCount += (n - i) * (m - j);
            } else {
                rectangleCount += (n - i) * (m - j);
            }
        }
    cout << squareCount << " " << rectangleCount << endl;
    return 0;
}