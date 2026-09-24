#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[] = {1, 5, 10, 20, 3};
    int arr2[] = {2, 8, 15, 25};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int minDiff = abs(arr1[0] - arr2[0]);

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            int diff = abs(arr1[i] - arr2[j]);

            if (diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    printf("Smallest difference = %d\n", minDiff);

    return 0;
}
