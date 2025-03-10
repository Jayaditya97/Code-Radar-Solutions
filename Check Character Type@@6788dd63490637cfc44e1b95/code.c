#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if (ch>='0' && ch<='9'){
        printf("Digit\n");
    }
    else if (ch>='a' && ch<='z' || ch>='A' && ch<='Z'){

        if (ch=='A' || ch=='a' || ch=='e' || ch=='E' || ch=='I'|| ch=='i' || ch=='o' || ch=='O' || ch=='U' || ch=='u'){
        printf("Vowel\n");
    }
    else{
        printf("Consonant\n");
    }
}
else{
    printf("Special Character\n");
}
return 0;
}