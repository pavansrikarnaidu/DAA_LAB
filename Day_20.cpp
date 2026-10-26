#include <stdio.h>
#include <string.h>

void longestSubstring(char str[]) {
    int n = strlen(str);
    int lastIndex[256];

    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int start = 0, maxLength = 0, maxStart = 0;

    for (int i = 0; i < n; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }

        lastIndex[ch] = i;

        if (i - start + 1 > maxLength) {
            maxLength = i - start + 1;
            maxStart = start;
        }
    }

    printf("Longest substring: ");
    for (int i = maxStart; i < maxStart + maxLength; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d\n", maxLength);
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    scanf("%999s", str);

    longestSubstring(str);

    return 0;
}
