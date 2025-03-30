#include <stdio.h>

int main() {
    int x = 10, y = 0;

    // Normal output
    printf("Result: %d\n", x * 2);  // Goes to stdout

    // Debugging message
    fprintf(stderr, "Debug: x = %d, y = %d\n", x, y);  // Goes to stderr

    return 0;
}
