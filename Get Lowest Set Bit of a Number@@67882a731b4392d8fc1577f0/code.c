#include <stdio.h>

int main() {
    int n;
    
    // Input a single integer
    scanf("%d", &n);
    
    int position = 0; // Position counter
    
    // Check each bit using bitwise AND
    while ((n & 1) == 0) {  
        n = n >> 1;  // Right shift by 1 to check next bit
        position++;   // Increase position counter
    }

    // Print the position of the lowest set bit
    printf("%d\n", position);
    
    return 0;
}
