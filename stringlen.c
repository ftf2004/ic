//write c program to find the string length, copy other strings, and concatenation

#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    gets(a);
    printf("length: %d\n", strlen(a));
    strcpy(b,a);
    printf("Copied String: %s\n",b);
    printf("Concat: %s\n",strcat(a,b));
}

