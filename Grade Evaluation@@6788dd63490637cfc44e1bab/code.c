#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    if (c>"F" || c=="E"){
        printf("Invalid grade");
    }
    else{
        switch(c){
            case 'A':
            printf("Excellent");
            case 'B':
            printf("Good");
            case 'C':
            printf("Average");
            case 'D':
            printf("Below Average");
            case 'F':
            printf("Fail");
        }
    }
    return 0;
}