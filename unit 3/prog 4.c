#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float sum = 0, avg;
    printf("Enter N: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\nAverage = %.2f\n", sum, avg);

    free(arr);
    return 0;
}
