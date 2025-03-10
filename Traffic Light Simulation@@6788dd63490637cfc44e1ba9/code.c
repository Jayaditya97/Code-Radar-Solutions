#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    if (c=='R'||c=='G'|| c=='Y'){
        switch(c){
            case 'R':
            printf("Stop\n");
            break;
            case 'G':
            printf("Go");
            break;
            case 'Y':
            printf("Slow Down");
            break;
        }
    }
    else{
        printf("Invalid input");
    }
    return 0;
}