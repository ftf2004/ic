#include <stdio.h>
int fact(int a){
    if (a<1)
        return 1;
    return a*fact(a-1);
}
void main(){
    int a;
    scanf("%d",&a);
    printf("%d",fact(a));
}