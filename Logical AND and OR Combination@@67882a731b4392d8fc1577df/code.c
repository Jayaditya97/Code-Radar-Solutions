#include <stdio.h>

int main() {
    int num1, num2;

    // Input two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Check if the first number is greater than zero AND the second number is less than zero
    // OR if both numbers are zero using && and || operators
    if ((num1 > 0 && num2 < 0) || (num1 == 0 && num2 == 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}