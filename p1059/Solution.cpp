#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int *nums = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    int i = 0;
    int j = 1;
    while (j < n) {
        if (nums[i] != nums[j]) {
            nums[i + 1] = nums[j];
            i++;
            j++;
        } else {
            j++;
        }
    }
    cout << i + 1 << endl;
    for (int k = 0; k < i + 1; k++) {
        cout << nums[k] << " ";
    }
    cout << endl;
    delete[] nums;
    return 0;
}