//Day 5:
//Input a number from the user and print
//a. Number of 1 and number of 0 in its binary representation.
//b. Number of consecutive 1 in the binary representation.
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int ones = 0, zeros = 0;
    int current = 0, maxConsecutive = 0;
    int temp = n;

    if (temp == 0) {
        zeros = 1; 
    }

    while (temp > 0) {
        int bit = temp % 2;

        if (bit == 1) {
            ones++;
            current++;
            if (current > maxConsecutive) {
                maxConsecutive = current;
            }
        } else {
            zeros++;
            current = 0; 
        }

        temp /= 2;
    }

    printf("a. Number of 1s: %d, Number of 0s: %d\n", ones, zeros);
    printf("b. Longest consecutive 1s: %d\n", maxConsecutive);

    return 0;
}
