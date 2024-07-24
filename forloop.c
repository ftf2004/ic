#include <stdio.h>
int main(){
    int i,n;
    printf("Enter size of the array: ");
    printf("Enter elements of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Printing the elements:\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}