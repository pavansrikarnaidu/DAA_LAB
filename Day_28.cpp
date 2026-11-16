
#include <stdio.h>

int main() {
    int n;
    long long a = 1, b = 1, c;

    printf("Enter the number of stairs: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input");
        return 0;
    }

    if (n == 0 || n == 1) {
        printf("Number of distinct ways = 1\n");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("Number of distinct ways = %lld\n", b);

    return 0;
}

