#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0;  // Numbers < 2 are not prime
    for (int i = 2; i * i <= n; i++) {  // Loop from 2 to sqrt(n)
        if (n % i == 0) return 0;  // If divisible, not prime
    }
    return 1;  // Prime number
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the function and print the result
    if (isPrime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
