#include <stdio.h>

int main() {
    int num1, num2;

    // Input two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Check if the numbers have opposite signs using the product approach
    if (num1 * num2 < 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}