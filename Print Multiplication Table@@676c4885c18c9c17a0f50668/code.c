#include <stdio.h>
int main(){
    int N, prod=0;
    scanf("%d", &N);
    for(int i=1;i<=10;i++){
        prod=N*i;
    printf("%d x %d = %d\n",N ,i ,prod);
    }

    return 0;
}