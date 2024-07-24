#include <stdio.h>
int main(){
    int i,n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements of the array: \n");
    int arr[n];
    i=0;
    while(i<n){
        scanf("%d",&arr[i]);
        i++;
    }
    printf("Printing the elements:\n");
    i=0;
    while(i<n){
        printf("%d\n",arr[i]);
        i++;
    }
    int min=arr[0];
    i=0;
    while(i<n){
        if (min>arr[i]){
            min=arr[i];
        }
        i++;
    }
    printf("Min Value is %d\n",min);
    int max=arr[0];
    i=0;
    while(i<n){
        if (max<arr[i]){
            max=arr[i];
        }
        i++;
    }
    printf("Max Value is %d",max);
}