//write c program to find the string length, copy other strings, and concatenation

#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    //gets(a);
    scanf("%s",a);
    printf("length: %d\n", strlen(a));
    strcpy(b,a);
    printf("Copied String: %s\n",b);
    printf("Concat: %s\n",strcat(a,b));
    if (strcmp(a,b))
        printf("Equal.");
    else
        printf("Not equal");
    //printf("Compare: %s\n",strcmp(a,b));
    //printf("Reverse: %d\n",strrev(a));
    //printf("Lower: %s\n",strlwr(a));
    //printf("Upper: %s\n",strupr(a));
}

