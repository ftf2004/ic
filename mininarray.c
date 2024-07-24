#include <stdio.h>
int main(){
    int i,n,min;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements of the array: \n");
    int arr[n];
    i=0;
    while(i<n){
        scanf("%d",&arr[i]);
        i++;
    }
    min=arr[0];
    i=0;
    while(i<n){
        if (min>arr[i]){
            min=arr[i];
        }
        i++;
    }
    printf("Max Value is %d",min);
}