#include <stdio.h>

int main() {
    char name[100], hobby[100];
    int age;
    
    // Take input for name, age, and hobby
    scanf("%s %d %[^\n]", name, &age, hobby);  // %[^\n] allows reading the whole line for the hobby
    
    // Print the name, age, and hobby
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    
    return 0;
}