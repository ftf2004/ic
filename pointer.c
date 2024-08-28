#include <stdio.h> 
void main(){
    int hoo=5;
    int *ho;
    ho=&hoo;
    printf("%d\n",*ho);
    printf("%p",ho);
}