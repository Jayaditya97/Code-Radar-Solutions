#include <stdio.h>

int main() {
    int num;
    
    // Read a single integer
    scanf("%d", &num);
    
    // Perform bitwise one's complement operation
    int result = ~num;
    
    // Output the result of the one's complement operation
    printf("%d\n", result);
    
    return 0;
}
