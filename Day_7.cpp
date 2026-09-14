//Day_7:
//You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

//Return the single element that appears only once.

//Your solution must run in O(log n) time and O(1) space.

//Example 1:

//Input: nums = [1,1,2,3,3,4,4,8,8]
//Output: 2
//Example 2:

//Input: nums = [3,3,7,7,10,11,11]
//Output: 10
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int low = 0, high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (mid % 2 == 1) {
            mid--;
        }

        if (nums[mid] == nums[mid + 1]) {
            low = mid + 2;
        } else {
            high = mid;
        }
    }

    printf("Single element: %d\n", nums[low]);

    return 0;
}
