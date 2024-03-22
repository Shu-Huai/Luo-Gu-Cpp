#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    vector<int> circle;
    for (int i = 0; i < n; i++) {
        circle.push_back(i + 1);
    }
    while (!circle.empty()) {
        for (int i = 0; i < m - 1; i++) {
            circle.push_back(circle[0]);
            circle.erase(circle.begin());
        }
        cout << circle[0] << " ";
        circle.erase(circle.begin());
    }
    return 0;
}