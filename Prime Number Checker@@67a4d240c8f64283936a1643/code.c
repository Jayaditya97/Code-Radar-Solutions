#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) return 0; // Numbers <= 1 are not prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0; // Found a divisor, not prime
    }
    return 1; // Prime number
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num)); // Output 1 if prime, 0 otherwise
    }
    return 0;
}
