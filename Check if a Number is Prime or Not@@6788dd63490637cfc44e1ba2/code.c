#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) 
        printf("Not Prime\n");
    else if (num == 2 || num == 3 || num == 5 || num == 7) 
        printf("Prime\n");
    else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) 
        printf("Not Prime\n");
    else 
        printf("Prime\n");

    return 0;
}
