#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input: two space-separated integers
    scanf("%d %d", &num1, &num2);
    
    // Check if num1 is less than or equal to num2
    if (num1 <= num2) {
        printf("True\n");   // Output True if the first number is less than or equal to the second
    } else {
        printf("False\n");  // Output False if the first number is greater than the second
    }

    return 0;
}