#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    if (c>'F' || c=='E'){
        printf("Invalid grade");
    }
    else{
        switch(c){
            case 'A':
            printf("Excellent");
            break;
            case 'B':
            printf("Good");
            break;
            case 'C':
            printf("Average");
            break;
            case 'D':
            printf("Below Average");
            break;
            case 'F':
            printf("Fail");
            break;
        }
    }
    return 0;
}