#include <stdio.h>
int main() {
    int num1;

    // Input two space-separated integers
    scanf("%d", &num1);

    // Check if at least one of the numbers is greater than zero using the || operator
    if (num1 > 0) {
        printf("False\n");
    } else {
        printf("True\n");
    }

    return 0;
}
