
#include <stdio.h>

int main() {
    int r, c, i, j, found = 0;

    scanf("%d %d", &r, &c);

    int parking[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &parking[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (parking[i][j] == 0) {
                parking[i][j] = 1;
                printf("Car parked at position: %d %d\n", i + 1, j + 1);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found) {
        printf("Parking Full\n");
    }

    return 0;
}

