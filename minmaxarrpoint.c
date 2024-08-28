#include <stdio.h>
void main(){
    int n[10]={1,2,3,4,5};
    int *p;
    p=&n;
    int min=*p;
    int max=*p;
    for(int i=0;i<5;i++){
        if(min>*p){
            min=*p;
        }
        p++;
    };
    p=&n;
    for(int i=0;i<5;i++){
        if(max<*p){
            max=*p;
        }
        p++;
    };
    printf("%d\n",min);
    printf("%d",max);
}