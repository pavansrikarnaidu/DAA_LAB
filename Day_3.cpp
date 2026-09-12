//Day 3

//Given an array of daily temperatures, find the length of the longest consecutive strictly increasing streak.


//Input:  [10, 12, 15, 14, 16, 18, 20]
//Output: 4
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);

    int temp[n];
    printf("Enter %d temperatures: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp[i]);
    }

    int longest = 1;
    int current = 1;

    for (int i = 1; i < n; i++) {
        if (temp[i] > temp[i - 1]) {
            current++;
        } else {
            current = 1;
        }
        if (current > longest) {
            longest = current;
        }
    }

    printf("Longest increasing streak: %d\n", longest);

    return 0;
}
