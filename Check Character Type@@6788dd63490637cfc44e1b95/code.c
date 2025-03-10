#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
if (ch=='A' || ch=='a' || ch=='e' || ch=='E' || ch=='I'|| ch=='i' || ch=='o' || ch=='O' || ch=='U' || ch=='u'){
        printf("Vowel\n");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit\n");
    }
    else{
        printf("Constant\n");
    }
else{
    printf("Special Character");
}
}