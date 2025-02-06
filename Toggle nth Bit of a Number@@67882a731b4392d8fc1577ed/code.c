#include <stdio.h>
int main(){
    int num1,num2;
    int mask = 1<<num2;
    scanf("%d %d", &num1,&num2);
    num1 = num1^mask;
    printf("%d \n", num1);
    return 0;
}