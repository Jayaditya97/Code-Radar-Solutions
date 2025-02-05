#include <stdio.h>

int main() {
    int num1, num2;

    // Input two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Check if at least one of the numbers is greater than zero using the || operator
    if (num1 > 0 || num2 > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}