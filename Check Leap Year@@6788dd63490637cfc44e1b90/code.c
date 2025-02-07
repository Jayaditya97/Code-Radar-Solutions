#include <stdio.h>

int main() {
    int year;
    
    // Input: Read the year
    scanf("%d", &year);
    
    // Check if the year is a leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }
    
    return 0;
}