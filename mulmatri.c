#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    int a[r1][c1], b[r2][c2], s[r1][c2];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d x %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d x %d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                s[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
