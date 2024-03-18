#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int *nums = new int[n]{0};
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    delete[] nums;
    return 0;
}