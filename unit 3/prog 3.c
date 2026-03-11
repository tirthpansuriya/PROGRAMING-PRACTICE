
#include <stdio.h>

void find(int *arr, int n, int *max, int *min) {
    *max = *min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > *max) *max = arr[i];
        if(arr[i] < *min) *min = arr[i];
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], max, min;
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    find(arr, n, &max, &min);

    printf("Max = %d\nMin = %d\n", max, min);
    return 0;
}
