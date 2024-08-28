#include <stdio.h>
void main(){
    char a[]="test";
    char *b;
    b=&a;
    int c=0;
    while(*b!='\0'){
        c++;
        b++;
    };
    printf("%d",c);
}