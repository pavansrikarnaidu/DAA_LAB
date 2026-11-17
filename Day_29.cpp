
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int n, start = 0, maxLen = 1;

    printf("Enter a string: ");
    scanf("%999s", str);

    n = strlen(str);

    for (int i = 0; i < n; i++) {

        // Odd length palindrome
        int left = i, right = i;

        while (left >= 0 && right < n &&
               str[left] == str[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;

        while (left >= 0 && right < n &&
               str[left] == str[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    printf("Longest Palindromic Substring: ");

    for (int i = start; i < start + maxLen; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d\n", maxLen);

    return 0;
}

