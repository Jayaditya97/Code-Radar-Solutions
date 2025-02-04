#include <stdio.h>

int main() {
    int num;
    
    // Take input of a single integer from the user
    scanf("%d", &num);
    
    // Print the hexadecimal representation
    printf("Hexadecimal: %X\n", num);
    
    // Print the octal representation
    printf("Octal: %o\n", num);
    
    return 0;
}