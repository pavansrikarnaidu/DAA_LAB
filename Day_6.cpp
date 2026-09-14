//Day_6: 
//Write a generalised code for the following pattern (example is for n=4) 
//A B C D
//B C D E
//C D E F
//D E F G

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char ch = 'A' + i + j;
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
