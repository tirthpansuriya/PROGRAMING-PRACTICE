//Write a program to enter N elements and search a value from the list using binary search. (with recursion)
#include <stdio.h>

int binarySearch(int a[], int low, int high, int searchElement)
{
    if (low<=high) {
        int mid=low+(high-low)/2;

        if (a[mid] == searchElement) {
            return mid;
        }

        if (a[mid] > searchElement) {
            return binarySearch(a, low, mid - 1, searchElement);
        }

        return binarySearch(a, mid+1, high, searchElement);
    }

    return -1;
}

int main()
{
    int a[100], n, i, searchElement, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order (Ascending):\n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &searchElement);

    result=binarySearch(a, 0, n-1, searchElement);

    if (result!=-1) {
        printf("Element %d found at index %d.\n", searchElement, result);
    } else {
        printf("Element %d not found in the list.\n", searchElement);
    }

    return 0;
}
