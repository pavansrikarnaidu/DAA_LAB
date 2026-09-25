#include <stdio.h>
#include <string.h>

int longestSubstring(char s[]) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        for (int j = start; j < i; j++) {
            if (s[j] == s[i]) {
                start = j + 1;
                break;
            }
        }

        int length = i - start + 1;

        if (length > maxLength) {
            maxLength = length;
        }
    }

    return maxLength;
}

int main() {
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Length of longest substring without duplicate characters = %d\n",
           longestSubstring(s));

    return 0;
}
