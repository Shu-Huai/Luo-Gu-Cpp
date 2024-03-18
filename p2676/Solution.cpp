#include<iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int n = 0;
    int b = 0;
    cin >> n >> b;
    int *h = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    sort(h, h + n, compare);
    int sum = 0;
    int count = 0;
    while (sum < b) {
        sum += h[count++];
    }
    cout << count << endl;
    delete[] h;
    return 0;
}