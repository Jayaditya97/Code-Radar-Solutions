#include <stdio.h>

int main() {
    double num;
    
    // Take input of a double-precision floating-point number
    scanf("%lf", &num);
    
    // Print the entered double
    printf("You entered: %.4lf\n", num);
    
    return 0;
}