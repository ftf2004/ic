#include <stdio.h>
void main(){
    int n[10]={1,2,3,4,5};
    int *p;
    p=&n;
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=(*p);
        p++;
    }
    printf("%d",sum);
}