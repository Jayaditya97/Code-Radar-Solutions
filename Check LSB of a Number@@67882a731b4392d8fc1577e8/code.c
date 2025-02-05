#include <stdio.h>

int main() {
    int num;
    
    // Read a single integer
    scanf("%d", &num);
    
    // Check if the LSB is set (1) or not (0)
    if (num & 1) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    
    return 0;
}
