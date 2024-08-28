#include <stdio.h>
void main(){
    int hoo[10]={9,8,7,6,5,4};
    int *ho;
    ho=&hoo;
    for(int i=0;i<5;i++){
        printf("%d\n",*ho);
        printf("%p\n",ho);
        ho++;
    }
}