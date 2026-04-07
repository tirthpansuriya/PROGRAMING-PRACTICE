//Write a program to enter N elements and arrange the list in ascending order using selection sort.
#include <stdio.h>

int main()
{
    int a[100], n, i, j, min_idx, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (i=0; i<n-1; i++) {
        min_idx=i;
        for (j=i+1; j<n; j++) {
            if (a[j]<a[min_idx]) {
                min_idx=j;
            }
        }

        if (min_idx!=i) {
            temp=a[min_idx];
            a[min_idx]=a[i];
            a[i]=temp;
        }
    }

    printf("\nSorted list in ascending order:\n");
    for (i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
