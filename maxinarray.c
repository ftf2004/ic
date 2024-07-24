#include <stdio.h>
int main(){
    int i,n,max;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements of the array: \n");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    printf("Max Value is %d",max);
}