
#include <stdio.h>
#include <string.h>

int areAnagrams(char a[], char b[]) {
    int count[256] = {0};

    for (int i = 0; a[i] != '\0'; i++)
        count[(unsigned char)a[i]]++;

    for (int i = 0; b[i] != '\0'; i++)
        count[(unsigned char)b[i]]--;

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char s[] = "cbaebabacd";
    char p[] = "abc";

    int n = strlen(s);
    int m = strlen(p);

    printf("Anagram indices: ");

    for (int i = 0; i <= n - m; i++) {
        char temp[256];

        strncpy(temp, s + i, m);
        temp[m] = '\0';

        if (areAnagrams(temp, p))
            printf("%d ", i);
    }

    return 0;
}

