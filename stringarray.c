#include <stdio.h>
#include <string.h>

int main() {
    char s[3][100];

    strcpy(s[0], "Hello, world!");
    strcpy(s[1], "C programming");
    strcpy(s[2], "Array of s");

    for (int i = 0; i < 3; i++)
        printf("%s\n", s[i]);
    strcpy(s[2], "Modified string");
    printf("\nAfter modification:\n");
    for (int i = 0; i < 3; i++) 
        printf("%s\n", s[i]);

    return 0;
}
