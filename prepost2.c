#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	c=++b - --a + ++b + a--;
    printf("%d",c);
}