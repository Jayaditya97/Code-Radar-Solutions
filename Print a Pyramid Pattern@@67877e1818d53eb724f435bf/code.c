#include <stdio.h>

int main() {
    int N;

    // Take the number of rows as input
    scanf("%d", &N);

    // Outer loop for rows
    for (int i = 1; i <= N; i++) {
        // Print leading spaces to center the stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print stars in each row
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}