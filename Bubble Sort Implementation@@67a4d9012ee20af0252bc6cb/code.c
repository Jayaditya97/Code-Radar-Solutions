#include <stdio.h>
    bubbleSort(arr, n){
        for(int i = 0;i<n-1;i++){
            int flag = 0;
            for(int j=0;j<n-1-i;j++){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        if(flag==0){
            break;
        }
    }
    printArray(arr, n){
        for(int i=0:i<n;i++){
            for(int j=0;j<=i;j++){
                printf("%d ", arr[j]);
            }
        }
    }
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i < n;i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}