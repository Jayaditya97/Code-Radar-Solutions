#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    char ch;
    scanf("%c", ch);
    switch(ch){
        case '+':
        return(a+b);
        printf("%d", return);
        break;
        case '-':
        return (a-b);
        break;
        case '*':
        return (a*b);
        break;
        case '/':
        return (a/b);
        break;
    }
    return 0;
}