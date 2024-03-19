#include <iostream>
#include <cstdio>

using namespace std;

int sort(int nums[], int low, int high, int k) {
    int i = low;
    int j = high;
    int mid = nums[(low + high) / 2];
    while (i <= j) {
        while (nums[j] > mid) {
            j--;
        }
        while (nums[i] < mid) {
            i++;
        }
        if (i <= j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
    if (k <= j) {
        return sort(nums, low, j, k);
    } else if (i <= k) {
        return sort(nums, i, high, k);
    } else {
        return nums[j + 1];
    }
}

int main() {
    int n = 0;
    int k = 0;
    cin >> n >> k;
    int *nums = new int[n];
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &nums[i]);
    }
    cout << sort(nums, 0, n - 1, k) << endl;
    delete[]nums;
    return 0;
}