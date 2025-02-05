#include <stdio.h>

int main() {
    int a, b;
    
    // Read two space-separated integers
    scanf("%d %d", &a, &b);
    
    // Perform bitwise AND operation
    int result = a & b;
    
    // Output the result of bitwise AND
    printf("%d\n", result);
    
    return 0;
}
