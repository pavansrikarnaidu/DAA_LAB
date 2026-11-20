
#include <stdio.h>
#include <string.h>

void findAnagrams(char s[], char p[]) {
    int n = strlen(s);
    int m = strlen(p);

    if (m > n)
        return;

    int pCount[256] = {0};
    int window[256] = {0};

    for (int i = 0; i < m; i++) {
        pCount[(unsigned char)p[i]]++;
        window[(unsigned char)s[i]]++;
    }

    printf("Anagram indices: ");

    for (int i = 0; i <= n - m; i++) {

        int match = 1;

        for (int j = 0; j < 256; j++) {
            if (pCount[j] != window[j]) {
                match = 0;
                break;
            }
        }

        if (match)
            printf("%d ", i);

        if (i < n - m) {
            window[(unsigned char)s[i]]--;
            window[(unsigned char)s[i + m]]++;
        }
    }
}

int main() {
    char s[] = "cbaebabacd";
    char p[] = "abc";

    findAnagrams(s, p);

    return 0;
}

