#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
    if (a>b || a<b){
        printf("hello\n");
    }
    else if(!(a>b && a<b)){
        printf("hi\n");
    }
    
}