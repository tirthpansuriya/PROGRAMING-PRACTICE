#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    // Input elements for 3x3 matrix
    printf("Enter 9 elements for 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("\nThe 3x3 matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
