#include <stdio.h>
#include <string.h>
void rev(char str[], int start, int end) {
    if (start >= end)
        return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    rev(str, start + 1, end - 1);
}

void main() {
    char str[100];
    scanf("%s", str);
    rev(str, 0, strlen(str) - 1);
    printf("%s\n", str);
}
