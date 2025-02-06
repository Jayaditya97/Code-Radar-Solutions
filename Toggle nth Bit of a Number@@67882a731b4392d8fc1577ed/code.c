#include <stdio.h>

int main() {
    int num1, num2;
    // Input the number and the bit position
    scanf("%d %d", &num1, &num2);
    // Create a mask by shifting 1 to the nth position
    int mask = 1 << num2;
    // oggle Tthe nth bit using XOR
    num1 = num1 ^ mask;
    // Output the updated number
    printf("%d\n", num1);
    return 0;
}