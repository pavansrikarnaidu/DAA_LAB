#include <stdio.h>

int main() {

    int arr[] = {5, 5, 7, 8, 8, 9, 9, 10, 10};
    int n = 9;

    int j = 0;

    // Traverse the array
    for (int i = 1; i < n; i++) {

        // If current element is different
        // from the previous unique element
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    // Number of unique elements
    int newSize = j + 1;

    printf("Array after removing duplicates: ");

    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
