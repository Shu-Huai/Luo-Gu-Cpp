#include<iostream>

using namespace std;

int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int *students = new int[n]{0};
    int *queries = new int[m]{0};
    for (int i = 0; i < n; i++) {
        cin >> students[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }
    for (int i = 0; i < m; i++) {
        cout << students[queries[i] - 1] << endl;
    }
    delete[] students;
    delete[] queries;
    return 0;
}