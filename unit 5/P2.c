//Write a program to enter N elements and search a value from the list using binary search (without recursion).
#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp, searchElement;
    int low, high, mid, found=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\nSorted list: ");
    for (i=0; i<n; i++) printf("%d ", a[i]);

    printf("\n\nEnter the value to search: ");
    scanf("%d", &searchElement);

    low=0;
    high=n-1;

    while (low<=high) {
        mid=(low+high)/2;

        if (a[mid]==searchElement) {
            printf("Element found at index %d.\n", mid);
            found=1;
            break;
        }
        else if (a[mid]<searchElement) {
            low=mid + 1;
        }
        else {
            high=mid-1;
        }
    }

    if (!found) {
        printf("Element not found in the list.\n");
    }

    return 0;
}
