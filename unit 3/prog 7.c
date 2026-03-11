#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int *a[r], *b[r], *sum[r];

    for(int i = 0; i < r; i++) {
        a[i] = (int*)malloc(c * sizeof(int));
        b[i] = (int*)malloc(c * sizeof(int));
        sum[i] = (int*)malloc(c * sizeof(int));
    }

    printf("Enter first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
            sum[i][j] = a[i][j] + b[i][j];
        }

    printf("Sum matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
