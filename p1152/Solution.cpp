#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int *nums = new int[n]{0};
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    bool *temp = new bool[n - 1]{false};
    for (int i = 0; i < n - 1; i++) {
        temp[abs(nums[i] - nums[i + 1]) - 1] = true;
    }
    delete[] nums;
    for (int i = 0; i < n - 1; i++) {
        if (!temp[i]) {
            cout << "Not jolly" << endl;
            delete[] temp;
            return 0;
        }
    }
    cout << "Jolly" << endl;
    delete[] temp;
    return 0;
}