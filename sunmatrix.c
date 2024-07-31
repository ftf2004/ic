#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], result[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d x %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d x %d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }


    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j] - b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
