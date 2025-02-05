#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input: two space-separated integers
    scanf("%d %d", &num1, &num2);
    
    // Check if num1 is equal to num2
    if (num1 == num2) {
        printf("True\n");   // Output True if the numbers are equal
    } else {
        printf("False\n");  // Output False if the numbers are not equal
    }

    return 0
}