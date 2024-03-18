#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int *nums = new int[n]{0};
    for (int i = 0; i < m; i++) {
        int a = 0;
        cin >> a;
        nums[a - 1]++;
    }
    for (int i = 0; i < n; i++) {
        while (nums[i] > 0) {
            cout << i + 1 << " ";
            nums[i]--;
        }
    }
    cout << endl;
    delete[] nums;
    return 0;
}