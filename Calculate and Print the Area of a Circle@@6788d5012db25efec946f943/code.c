#include <stdio.h>

int main() {
    float radius, area;
    const float pi = 3.14;  // Define the value of pi as 3.14
    
    // Take input of the radius
    scanf("%f", &radius);
    
    // Calculate the area of the circle
    area = pi * radius * radius;
    
    // Print the area of the circle
    printf("Area: %.2f\n", area);
    
    return 0;
}