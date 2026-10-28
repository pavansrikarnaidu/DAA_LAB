
#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];
    int j = 0;

    // Store non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }

    // Fill remaining positions with zeros
    while (j < n) {
        temp[j++] = 0;
    }

    // Copy result back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after shifting zeros: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

