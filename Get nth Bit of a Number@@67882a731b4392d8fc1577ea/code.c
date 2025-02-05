#include <stdio.h>

int main() {
    int num, n;
    
    // Read the number and the bit position
    scanf("%d %d", &num, &n);
    
    // Retrieve the nth bit using bitwise right shift and mask
    int nth_bit = (num >> n) & 1;
    
    // Output the value of the nth bit (0 or 1)
    printf("%d\n", nth_bit);
    
    return 0;
}
