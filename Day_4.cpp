//Day 4: 
//Given an integer array arr and a target value target, find the indices of two elements whose sum equals target.  Assume exactly one valid pair exists, and the same element cannot be used twice.
//Input:
//arr = [2, 7, 11, 15]
//target = 9

//Output:
//[0, 1]

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter target: ");
    scanf("%d", &target);

    int idx1 = -1, idx2 = -1;

    for (int i = 0; i < n && idx1 == -1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                idx1 = i;
                idx2 = j;
                break;
            }
        }
    }

    printf("[%d, %d]\n", idx1, idx2);

    return 0;
}
