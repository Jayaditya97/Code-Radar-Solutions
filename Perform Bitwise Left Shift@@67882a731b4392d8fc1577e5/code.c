#include <stdio.h>

int main() {
    int num, shift;
    
    // Read the number and the number of positions to shift
    scanf("%d %d", &num, &shift);
    
    // Perform bitwise left shift operation
    int result = num << shift;
    
    // Output the result of the left shift operation
    printf("%d\n", result);
    
    return 0;
}
