#include <stdio.h>
int main(){
    int N, prod=0;
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        prod*=i;
    }
    printf("%d x %d = %d",N ,i ,prod);
    return 0;
}