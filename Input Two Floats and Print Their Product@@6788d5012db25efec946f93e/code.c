#include <stdio.h>

int main() {
    float num1, num2;
    
    // Take input of two floating-point numbers from the user
    scanf("%f %f", &num1, &num2);
    
    // Print the product of the two floats
    printf("Product: %.2f\n", num1 * num2);
    
    return 0;
}