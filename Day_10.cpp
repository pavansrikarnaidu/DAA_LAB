#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            // Print '*' for the first row, last row, first column, or last column
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
