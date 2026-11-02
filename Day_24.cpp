
#include <stdio.h>

int findPeakElement(int nums[], int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[mid + 1]) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    int nums[] = {1, 2, 3, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = findPeakElement(nums, n);

    printf("Peak element index: %d\n", result);
    printf("Peak element: %d\n", nums[result]);

    return 0;
}

