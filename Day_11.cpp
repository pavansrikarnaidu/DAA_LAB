#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {-5, -4, -3, 1, 2, 3};
    int n = 6;

    int result[6];

    int left = 0;
    int right = n - 1;

    // Fill result from right to left
    for (int i = n - 1; i >= 0; i--) {

        if (abs(arr[left]) > abs(arr[right])) {
            result[i] = arr[left] * arr[left];
            left++;
        }
        else {
            result[i] = arr[right] * arr[right];
            right--;
        }
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
